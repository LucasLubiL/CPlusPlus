#include <iostream>

struct Node{
    
    int valor;
    Node* next;
    
    Node(){
        valor=0;
        next=NULL;
    }
    
    Node(int value){
        valor=value;
        next=NULL;
    }
    
};

struct List{
    
    Node* first;
    Node* last;
    int c;
    int maior,menor;
    
    List(){
        first=NULL;
        last=NULL;
        c=0;
        maior=-99999;
        menor=99999;
    }
    
    bool empty(){
        return first == NULL;
    }
    
    void pushFront(int value){
        Node* n = new Node(value);
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
        Node* ma;
        Node* me;
        while(aux!=NULL){
            if(aux->valor>maior){
                maior=aux->valor;
                ma=aux;
            }
            if(aux->valor<menor){
                menor=aux->valor;
                me=aux;
            }
            aux=aux->next;
        }
        
        printf("Maior numero: %d no endereco %p\n",maior,&ma->valor);
        printf("Meior numero: %d no endereco %p\n",menor,&me->valor);
        printf("Maior numero: %d no endereco %p\n",maior,&ma);
        printf("Meior numero: %d no endereco %p\n",menor,&me);
        
    }
    
};

int main()
{
    
    List l;
    
    int x,n;
    
    scanf("%d",&x);
    
    for(int i = 0; i < x; i++){
        scanf("%d",&n);
        l.pushFront(n);
    }
    
    l.verificar();

    return 0;
}