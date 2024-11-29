#include <stdio.h>
#include <string>
#include <iostream>
#include <cstring>

struct Node{
    
    int valor;
    Node* next;
    
    Node(){
        next = NULL;
    }
    
    Node(int _valor){
        valor = _valor;
        next = NULL;
    }
    
};

struct Stack{
    
    Node* first;
    bool VF;
    
    Stack(){
        first = NULL;
        VF = true;
    }
    
    bool empty(){
        return first == NULL;
    }
    
    bool verify(){
        return VF == true;
    }
    
    void pushStack(int valor){
        
        Node* n = new Node(valor);
        if(empty()){
            first = n;
            VF = true;
            return;
        }
        n -> next = first;
        first = n;
        
    }
    
    void popStack(int del){
        
        if(empty()){
            return;
        }
        
        if(first -> valor == del){
            Node* toDel = first;
            first = first -> next;
            delete(toDel);
        }else{
            VF = false;
        }
        
    }
    
    void remove(){
        
        VF = true;
        
        if(empty()){
            return;
        }
        
        Node* aux = first;
        Node* toDel;
        while(aux != NULL){
            
            toDel = aux;
            aux = aux -> next;
            delete(toDel);
            
        }
        
        first = NULL;
        
    }
    
};

struct Queue{
    
    Node* first;
    Node* last;
    bool VF;
    
    Queue(){
        first = NULL;
        last = NULL;
        VF = true;
    }
    
    bool empty(){
        return first == NULL;
    }
    
    bool verify(){
        return VF == true;
    }
    
    void pushQueue(int valor){
        
        Node* n = new Node(valor);
        if(empty()){
            first = n;
            last = n;
            VF = true;
            return;
        }
        last -> next = n;
        last = n;
        
    }
    
    void popQueue(int del){
        
        if(empty()){
            return;
        }
        
        if(first -> valor == del){
            Node* toDel = first;
            first = first -> next;
            delete(toDel);
        }else{
            VF = false;
        }
        
    }
    
    void remove(){
        
        VF = true;
        
        if(empty()){
            return;
        }
        
        Node* aux = first;
        Node* toDel;
        while(aux != NULL){
            
            toDel = aux;
            aux = aux -> next;
            delete(toDel);
            
        }
        
        first = NULL;
        last = NULL;
        
    }
    
};

struct PriQueue{
    
    Node* first;
    Node* last;
    bool VF;
    int maior;
    
    PriQueue(){
        first = NULL;
        last = NULL;
        VF = true;
        maior = -9999999;
    }
    
    bool empty(){
        return first == NULL;
    }
    
    bool verify(){
        return VF == true;
    }
    
    void pushPriQueue(int valor){
        
        Node* n = new Node(valor);
        
        if(empty()){
            first = n;
            last = n;
            VF = true;
            return;
        }
        n -> next = first;
        first = n;
        
        Node* aux = first;
        while(aux -> next != NULL){
            if(aux -> valor < aux -> next -> valor){
                int tmp = aux -> valor;
                aux -> valor = aux -> next -> valor;
                aux -> next -> valor = tmp;
            }
            
            aux = aux -> next;
            
        }
        
    }
    
    void popPriQueue(int del){
        
        if(empty()){
            return;
        }
        
        if(first == last){
            if(first -> valor == del){
                first = NULL;
                last = NULL;
                return;
            }else{
                VF = false;
                return;
            }
        }
        
        if(first -> valor == del){
            Node* toDel = first;
            first = first -> next;
            delete(toDel);
        }else{
            VF = false;
        }
        
    }
    
    void remove(){
        
        maior = -9999999;
        VF = true;
        
        if(empty()){
            return;
        }
        
        Node* aux = first;
        Node* toDel;
        while(aux != NULL){
            
            toDel = aux;
            aux = aux -> next;
            delete(toDel);
            
        }
        
        first = NULL;
        last = NULL;
        
    }
    
};

int main()
{
    
    Stack pilha;
    Queue fila;
    PriQueue priFila;
    
    int n;
    int a, b;
    
    while(scanf("%d",&n) != EOF){
        
        for(int i = 0; i < n; i++){
            
            scanf("%d %d", &a, &b);
            
            if(a == 1){
                pilha.pushStack(b);
                fila.pushQueue(b);
                priFila.pushPriQueue(b);
            }else{
                if(pilha.verify()){
                    pilha.popStack(b);
                }
                if(fila.verify()){
                    fila.popQueue(b);
                }
                if(priFila.verify()){
                    priFila.popPriQueue(b);
                }
            }
            
        }
        
        if(pilha.verify() && fila.verify() && priFila.verify()){
            printf("not sure\n");
        }else if(pilha.verify() && fila.verify() || fila.verify() && priFila.verify() || pilha.verify() && priFila.verify()){
            printf("not sure\n");
        }else if(pilha.verify()){
            printf("stack\n");
        }else if(fila.verify()){
            printf("queue\n");
        }else if(priFila.verify()){
           printf("priority queue\n");
        }else{
            printf("impossible\n");
        }
        
        pilha.remove();
        fila.remove();
        priFila.remove();
        
    }
    
    return 0;
}
