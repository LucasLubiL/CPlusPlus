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
   int soma;
   int c;

   List(){
      first=NULL;
      last=NULL;
      c=0;
      soma=0;
   }

   bool empty(){
      return first==NULL;
   }

   void pushBack(int value){
       c++;
      Node* n = new Node(value);
      if(empty()){

         first=n;
         last=n;
         return;

      }
      last->next=n;
      last=n;
   }

   void verificar(int pag){
       int cont=1;
       if(pag==0){

          printf("0\n");
          return;
       }
       Node* aux=first;
       while(aux!=NULL){

           soma=soma+aux->valor;
           if(soma>=pag){
              printf("%d\n",cont);
              return;
           }
           cont++;
           aux=aux->next;

       }
       printf("0\n");


   }

};

int main(){

    List l;

    int n,x;

    scanf("%d",&n);

    for(int i = 0; i< n;i++){
        scanf("%d",&x);
        l.pushBack(x);
    }

    scanf("%d",&x);

    l.verificar(x);

   return 0;
}
