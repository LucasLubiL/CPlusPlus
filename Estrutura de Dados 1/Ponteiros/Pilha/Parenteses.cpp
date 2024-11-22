#include <stdio.h>
#include <string.h>

struct Node{
    
    char forma;
    Node* next;
    
    Node(){
        next=NULL;
    }
    
    Node(char _forma){
        forma = _forma;
    }
    
};

struct Stack{
    
    Node* first;
    
    Stack(){
        first=NULL;
    }
    
    bool empty(){
        return first==NULL;
    }
    
    void pushFront(char forma){
        Node* n = new Node(forma);
        if(empty()){
            first = n;
            return;
        }
        n->next = n;
        first = n;
    }
    
    
};

int main()
{
    
    
    

    return 0;
}