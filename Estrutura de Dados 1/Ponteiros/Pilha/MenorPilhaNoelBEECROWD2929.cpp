#include <iostream>
#include <cstring>

using namespace std;

struct Node{
    
    int value;
    Node* next;
    
    Node(){
        next = NULL;
    }
    
    Node(int _value){
        value = _value;
        next = NULL;
    }
    
};

struct Stack{
    
    Node* first;
    long int menor;
    
    Stack(){
        first = NULL;
        menor = 9999999999;
    }
    
    bool empty(){
        return first == NULL;
    }
    
    void push(int _value){
        Node* n = new Node(_value);
        
        if(n -> value < menor){
            menor = n -> value;
        }
        if(empty()){
            first = n;
            return;
        }
        
        n -> next = first;
        first = n;
        
    }
    
    int min(){
        return menor;
    }
    
    void pop(){
        
        if(empty()){
            printf("EMPTY\n");
            return;
        }
        
        Node* toDel = first;
        if(first -> value == menor){
            if(first -> next == NULL){
                menor = 9999999999;
                first = NULL;
                return;
            }
            Node* aux = first -> next;
            menor = 9999999999;
            while(aux != NULL){
                if(aux -> value < menor){
                    menor = aux -> value;
                }
                aux = aux -> next;
            }
        }
        first = first -> next;
        delete(toDel);
        
    }
    
};

int main()
{
    
    Stack pilha;
    
    string cell;
    int a,b,aux;
    
    scanf("%d ",&a);
    
    for(int i = 0; i < a; i++){
        
        cin >> cell;
        
        if(cell == "PUSH"){
            cin >> b;
            pilha.push(b);
        }else if(cell == "MIN"){
            aux = pilha.min();
            if(aux == 9999999999 || pilha.empty()){
                printf("EMPTY\n");
            }else{
                printf("%d\n",aux);
            }
        }else if(cell == "POP"){
            pilha.pop();
        }
        
    }
    
    return 0;
}