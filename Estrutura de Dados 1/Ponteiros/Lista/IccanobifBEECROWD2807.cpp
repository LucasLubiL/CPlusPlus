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

struct Lista{

    Node* first;
    Node* last;

    Lista(){
        first=NULL;
        last=NULL;
    }

    bool empty(){
        return first==NULL;
    }

    void pushFront(int value){
        Node* n= new Node(value);
        if(empty()){
            first=n;
            last=n;
            return;
        }
        n->next=first;
        first=n;
    }

    void imprimir(){
        Node* aux=first;
        while(aux!=NULL){
            if(aux->next==NULL){
                printf("%d\n",aux->valor);
            }else{
                printf("%d ",aux->valor);
            }
            aux=aux->next;
        }
    }

};

int main()
{

    Lista ord;
    int n;
    int aux=0;
    int aux2=1;
    int aux3=1;

    scanf("%d",&n);

    for(int i=0;i<n;i++){

        ord.pushFront(aux3);

        aux3=aux+aux2;
        aux=aux2;
        aux2=aux3;

    }

    ord.imprimir();

    return 0;
}
