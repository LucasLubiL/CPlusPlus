#include <iostream>

struct Node{
    
    int valor;
    char letra;
    Node* next;
    
    Node(){
        valor=0;
        next=NULL;
    }
    
    Node(int value, char pa){
        valor=value;
        letra=pa;
        next=NULL;
    }
    
};

struct List{
    
    Node* first;
    Node* last;
    int c;
    
    List(){
        first=NULL;
        last=NULL;
        c=0;
    }
    
    bool empty(){
       return first==NULL;
    }
    
    void pushFront(int value, char pa){
        c++;
        Node* n = new Node(value,pa);
        if(empty()){
            first=n;
            last=n;
            return;
        }
        n->next=first;
        first=n;
    }
    
    void verificar(){
        Node* aux=first;
        int contP=0;
        int contB=0;
        char letra;
        while(aux!=NULL){
            
            if(aux->valor<=127){
                contP++;
                letra=aux->letra;
                if(contP==2){
                    printf("*\n");
                    return;
                }
            }else if(aux->valor>127){
                contB++;
                if(contB==5){
                    printf("*\n");
                    return;
                }
            }
            aux=aux->next;
        }
        printf("%c\n",letra);
    }
    
    void clear(){
        Node* toDel;
        Node* aux=first;
        while(aux!=NULL){
            toDel=aux;
            aux=aux->next;
            delete(toDel);
        }
        first=NULL;
        last=NULL;
        c=0;
    }
    
};

int main()
{
    
    List l;
    int n,x;
    
    scanf("%d",&n);
    
    while(n!=0){
        for(int j=0;j<n;j++){
            char pa='A';
            for(int i=0;i<5;i++){
                scanf("%d",&x);
                l.pushFront(x,pa);
                pa=pa+1; 
            }
            l.verificar();
            l.clear();
        }
        
        scanf("%d",&n);
        
    }

    return 0;
}