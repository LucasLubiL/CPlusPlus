#include <iostream>

using namespace std;

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

   List(){
     first=NULL;
     last=NULL;
     c=0;
   }

   bool empty(){
     return first==NULL;
   }

   void pushFront(int value){
     Node* n = new Node(value);
     c++;
     if(empty()){
        first=n;
        last=n;
        return;
     }
     n->next=first;
     first=n;
   }

   void pushBack(int value){
     Node* n= new Node(value);
     c++;
     if(empty()){
        first=n;
        last=n;
        return;
     }
     last->next=n;
     last=n;
   }

   int size(){
      return c;
   }

   void popFront(){
     if(empty()){
        return;
     }
     if(c==1){
        delete(first);
        first=NULL;
        last=NULL;
        c=0;
        return;
     }
     Node* toDel = first;
     first=first->next;
     delete(toDel);
     c--;

   }

   void popBack(){
      if(empty()){
        return;
      }
      if(c==1){
        delete(first);
        first=NULL;
        last=NULL;
        c=0;
        return;
      }
      Node* toDel = last;
      Node* aux=first;
      while(aux->next!=last){
        aux=aux->next;
      }
      last=aux;
      last->next=NULL;
      delete(toDel);
      c--;
   }

   void insert(int value, int pos) { //O(n)
        if (pos <= 0) {
            pushFront(value);
            return;
        }
        if (pos >= c) {
            pushBack(value);
            return;
        }
        Node* aux = first;
        for (int i = 0; i < pos; i++, aux = aux->next);
        Node* n = new Node(value);
        n->next = aux->next;
        aux->next = n;
        c++;
    }

    void remove(int value) { // O(n)
        if (empty()) return;

        Node *aux = first;
        Node *prev = NULL;
        for (int i = 0; i < c; i++) {
            if (aux->valor == value) {
                if (prev == NULL) {
                    popFront();
                } else {
                    prev->next = aux->next;
                    delete(aux);
                    c--;
                    aux = prev;
                }
            }
            prev = aux;
            aux = aux->next;
        }
    }

    void removeByPos(int pos) { // O(n)
        if (pos <= 0) {
            popFront();
            return;
        }
        if (pos >= c) {
            popBack();
            return;
        }
        Node* aux = first;
        for (int i = 0; i < pos - 1; i++, aux = aux->next);
        Node* toDel = aux->next;
        aux->next = toDel->next;
        delete(toDel);
        c--;
    }

    void removerN(int n){
       if(c<=n){
          Node* toDel;
          Node* aux=first;
          while(aux!=NULL){
            toDel=aux;
            aux=aux->next;
            delete(toDel);
          }
          delete(aux);
          first=NULL;
          last=NULL;
          c=0;
          return ;
       }else{

          for(int i=0;i<n;i++){
            popBack();
          }
       }
    }

    void removerSegundo(){

      int cont=0;
      if(c<=1){
        return;
      }else{

        Node* novo;
        Node* novo2;
        Node* aux=first;

        novo=aux->next;
        novo2=novo->next;
        first->next=novo2;
        delete(novo);
        c--;

      }
    }

    void pushFinal(){
      pushBack(c);
    }

    void inserirN(int n){
       for(int i=1;i<=n;i++){
          pushBack(i);
       }
    }

    void penultimo(int valor){

        if(c<=1){
           return;
        }else{

          Node* aux=first;
          Node* n = new Node(valor);
          while(aux!=last){
            aux=aux->next;
            if(aux->next==last){
                aux->next=n;
                n->next=last;
                c++;
            }
          }
        }
    }

    void print() {
        Node* aux = first;
        while (aux != NULL) {
            printf("%d -> ", aux->valor);
            aux = aux->next;
        }
    }

};

int main()
{

    List l;
    int n;

    l.pushFront(10);
    l.pushFront(3);
    l.pushBack(5);
    l.pushBack(3);
    l.pushFront(8);
    l.pushBack(50);
    l.pushFront(78);
    l.pushBack(1);
    l.pushBack(75);
    l.pushFront(25);
    l.pushBack(60);
    l.pushFront(34);
    l.pushBack(80);
    l.pushBack(30);
    l.pushBack(23);
    l.pushFront(5);
    l.pushFront(66);

    scanf("%d",&n);

    l.removerN(n);
    l.print();
    printf("\n");

    l.removerSegundo();
    l.print();
    printf("\n");

    l.pushFinal();
    l.print();
    printf("\n");

    scanf("%d",&n);

    l.inserirN(n);
    l.print();
    printf("\n\n");

    l.penultimo(5000);
    l.print();
    printf("\n");

    return 0;
}
