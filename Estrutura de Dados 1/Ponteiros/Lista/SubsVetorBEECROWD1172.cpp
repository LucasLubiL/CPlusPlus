#include <stdio.h>

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

   List(){
      first=NULL;
      last=NULL;
   }

   bool empty(){
      return first==NULL;
   }

   void pushBack(int value){
       Node* n = new Node(value);
       if(empty()){
          first=n;
          last=n;
          return;
       }
       last->next=n;
       last=n;
   }

   void imprimir(){
      Node* aux = first;
      int x=0;
      while(aux!=NULL){
        printf("X[%d] = %d\n",x, aux->valor);
        aux=aux->next;
        x++;
      }
   }

};

int main(){

  List ord;
  int x;

  for(int i=0;i<10;i++){

      scanf("%d",&x);
      if(x<=0){
        x=1;
      }
      ord.pushBack(x);
  }

  ord.imprimir();

  return 0;
}
