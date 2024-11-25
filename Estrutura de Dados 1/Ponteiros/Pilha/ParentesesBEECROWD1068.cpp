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
        int cont=0;
        
        while(aux != NULL){
            
            if(aux -> letra == ')'){
                cont++;
            }else{
                cont--;
            }
            
            if(cont<0){
                printf("incorrect\n");
                return;
            }
            
            aux = aux -> next;
            
        }
        
        if(cont==0){
            printf("correct\n");
            return;
        }else{
            printf("incorrect\n");
            return;
        }
        
    }
    
    void pop(){
        if(empty()) return;
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
    
    Stack pare;
    string frase;
    
    while(getline(cin, frase)){
        
        for(int i = 0; i < frase.size(); i++){
            if(frase[i]=='(' || frase[i]==')'){
                pare.push(frase[i]);
            }
        }
        
        pare.verificar();
        
        while(!pare.empty()){
            pare.pop();
        }
        
    }
    
    return 0;
}