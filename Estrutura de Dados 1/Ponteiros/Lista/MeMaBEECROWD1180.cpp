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
   int menor=99999;
   int c=0;

   List(){
      first=NULL;
      last=NULL;
   }

   bool empty(){
      return first==NULL;
   }

   void pushBack(int value){
       Node* n = new Node(value);
       c++;
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
      c=0;
      while(aux!=NULL){
        if(aux->valor<menor){
            menor=aux->valor;
            x=c;
        }
        aux=aux->next;
        c++;
      }
      printf("Menor valor: %d\n",menor);
      printf("Posicao: %d\n",x);
   }
};

int main(){

  List ord;
  int x;
  int n;

  scanf("%d",&n);

  for(int i=0;i<n;i++){
      scanf("%d",&x);
      ord.pushBack(x);
  }
  ord.imprimir();


  return 0;
}
