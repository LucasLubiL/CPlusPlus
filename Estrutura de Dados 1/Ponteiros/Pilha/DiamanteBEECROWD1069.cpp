#include <stdio.h>
#include <string>
#include <iostream>
#include <cstring>

using namespace std;

struct Node{
    
    char letra;
    Node* next;
    
    Node(){
        next = NULL;
    }
    
    Node(char _letra){
        letra = _letra;
        next = NULL;
    }
    
};

struct Stack{
    
    Node* first;
    
    Stack(){
        first=NULL;
    }
    
    bool empty(){
        return first == NULL;
    }
    
    void push(char letra){
        Node* n = new Node(letra);
        if(empty()){
            first = n;
            return;
        }
        n -> next = first;
        first = n;
    }
    
    void verificar(){
        
        Node* aux = first;
        int maior = 0;
        int menor = 0;
        int cont = 0;
        
        while(aux != NULL){
            
            if(aux -> letra == '>'){
                maior++;
            }else if(aux -> letra == '<'){
                if(maior == 0){
                    menor = 0 ;
                }else{
                    menor++;
                }
                
            }
            
            if(maior > 0 && menor == 1){
                
                cont++;
                menor--;
                maior--;
            }
            
            aux = aux -> next;
            
        }
        
        printf("%d\n",cont);
        
    }
    
    void pop(){
        
        if(empty()){
            return;
        }
        
        if(first->next==NULL){
            delete(first);
            first=NULL;
            return;
        }
        
        Node* toDel = first;
        first = first->next;
        delete(toDel);
        
    }
    
};

int main()
{
    
    Stack diam;
    string frase;
    int n;
    
    scanf("%d%*c",&n);
    
    for(int i = 0; i < n; i++){
        
        getline(cin, frase);
        
        for(int i = 0; i < frase.size(); i++){
            if(frase[i]=='<' || frase[i]=='>'){
                diam.push(frase[i]);
            }
        }
        
        diam.verificar();
        
        while(!diam.empty()){
            diam.pop();
        }
        
    }
    
    return 0;
}
