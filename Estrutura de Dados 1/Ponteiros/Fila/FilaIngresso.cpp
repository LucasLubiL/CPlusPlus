#include <iostream>

struct Node{

    int value;
    Node* next;
    Node* prev;

    Node(){
       next = NULL;
       prev = NULL;
    }

    Node(int _value){
       value = _value;
       next = NULL;
       prev = NULL;
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

     void push(int _value){
        Node* n = new Node(_value);
        if(empty()){
            first = n;
            last = n;
            return;
        }

        n -> prev = last;
        last -> next = n;
        last = n;

     }

     void remove(int del){

         if(empty()){
            return;
         }

         if(first -> value == del){
            popFront();
            return;
         }

         if(last -> value == del){
            popBack();
            return;
         }

         if(first == last){
            first = NULL;
            last = NULL;
            return;
         }

         Node* aux = first;
         while(aux != NULL){

            if(aux -> value == del){

                Node* toDel = aux;
                aux -> prev -> next = aux -> next;
                aux -> next -> prev = aux -> prev;
                delete(toDel);
                return;

            }

            aux = aux -> next;

         }

     }

     void popFront(){

         if(empty()){
            return;
         }

         if(first == last){
            first = NULL;
            last = NULL;
            return;
         }

         Node* toDel = first;
         first = first -> next;
         delete(toDel);

     }

     void popBack(){

         if(empty()){
            return;
         }

         if(first == last){
            first = NULL;
            last = NULL;
            return;
         }

         Node* toDel = last;
         last = last -> prev;
         last -> next = NULL;
         delete(toDel);

     }

     void print(){

         Node* aux = first;
         while(aux != NULL){

            if(aux -> next == NULL){
                printf("%d\n",aux -> value);
                return;
            }

            printf("%d ",aux -> value);
            aux = aux -> next;

         }

     }

};

int main(){

    Queue fila;

    int a,b,c,d;

    scanf("%d",&a);

    for(int i = 0; i < a; i++){

        scanf("%d",&b);
        fila.push(b);

    }

    scanf("%d",&c);

    for(int i = 0; i < c; i++){

        scanf("%d",&d);
        fila.remove(d);

    }

    fila.print();

   return 0;
}