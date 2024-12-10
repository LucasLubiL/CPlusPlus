#include <iostream>

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

struct Queue{

    Node* first;
    Node* last;

    Queue(){
        first = NULL;
        last = NULL;
    }

    bool empty(){
        return first == NULL;
    }

    void enqueue(int _value){

        Node* n = new Node(_value);
        if(empty()){
            first = n;
            last = n;
            return;
        }

        last -> next = n;
        last = n;

    }

    void enqueueOrd(int _value){

        Node* n = new Node(_value);
        if(empty()){
            first = n;
            last = n;
            return;
        }

        n -> next = first;
        first = n;

        Node* aux = first;
        while(aux -> next != NULL){
            if(aux -> value < aux -> next -> value){
                int tmp = aux -> value;
                aux -> value = aux -> next -> value;
                aux -> next -> value = tmp;
            }

            aux = aux -> next;

        }
    }

    int verify(){

       if(!empty()){
           Node* toDel = first;
           int num = toDel -> value;
           first = first -> next;
           delete(toDel);
           return num;
       }else{
           return -1;
       }

    }

    void print(){
        Node* aux = first;
        while(aux != NULL){
            printf("%d - ",aux->value);
            aux = aux -> next;
        }
        printf("\n");

    }

};

int main()
{

    Queue fila;
    Queue filaOrd;

    int n,m,a;
    int u,d;
    int cont = 0;

    scanf("%d",&n);

    for(int i = 0; i < n; i++){
        scanf("%d",&m);
        for(int i = 0; i < m; i++){
            scanf("%d",&a);
            fila.enqueue(a);
            filaOrd.enqueueOrd(a);
        }

        for(int i = 0; i < m; i++){
            u = fila.verify();
            d = filaOrd.verify();
            if(u == d){
                cont++;
            }
        }

        printf("%d\n",cont);
        cont = 0;

    }

    return 0;
}
