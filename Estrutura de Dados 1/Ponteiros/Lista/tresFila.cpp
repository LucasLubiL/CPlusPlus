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
   double* mediana;
   int c;
   int cont;

   List(){
      first=NULL;
      last=NULL;
      c=0;
      cont=0;

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

   int verificar(){
       int cont2=0;
       Node* aux=first;
       while(aux!=NULL){

          if(cont2==cont){
            cont++;
            return aux->valor;
          }
          cont2++;

          aux=aux->next;
       }


   }

   void tela(){

      Node* ord=first;
      while(ord!=NULL){
        if(ord->next==NULL){
            printf("%d\n",ord->valor);
            return;
        }
        printf("%d ",ord->valor);
        ord=ord->next;
      }

   }

};

int main(){

    List um;
    List dois;
    List fim;

    int num1;
    int num2;

    int n,x;


    scanf("%d",&n);

    for(int i = 0; i< n;i++){
        scanf("%d",&x);
        um.pushBack(x);
    }

    for(int i = 0; i< n;i++){
        scanf("%d",&x);
        dois.pushBack(x);
    }

     for(int i = 0; i< n;i++){
        num1=um.verificar();
        fim.pushBack(num1);
        num2=dois.verificar();
        fim.pushBack(num2);
    }

    fim.tela();

   return 0;
}


