#include <iostream>
#include <locale.h>

using namespace std;

struct Node{

    int chegada;
    char letra;
    int proc;
    Node* next;

    Node(){
       chegada=0;
       int proc=0;
       next=NULL;
    }

    Node(char letra_,int chegada_, int processamento){
       letra = letra_;
       chegada = chegada_;
       proc = processamento;
       next = NULL;
    }

};

struct List{

     Node* first;
     Node* last;
     int c;
     int sum;

     List(){
        first=NULL;
        last=NULL;
        c=0;
        sum=0;
     }

     bool empty(){
         return first==NULL;
     }

     void pushBack(char letra,int chegada,int processamento){

        Node* n = new Node(letra,chegada,processamento);
        c++;
        sum = sum + processamento;

        if(empty()){
            first = n;
            last = n;
            return;
        }

        last->next=n;
        last=n;

     }

     int soma(){
         return sum;
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

     void verificar(int tempo){

        if(tempo>=10){
            printf("%d| Processos em estado de pronto: ",tempo);

        }else{
            printf("%d | Processos em estado de pronto: ",tempo);
        }

        int t = 999999;

        Node* aux = first;
        Node* aux2 = NULL;

        while(aux!=NULL){

            if(aux->chegada <= tempo){
               printf("%c - Pocessamento restante: %d ( Tempo de chegada: %d )\n",aux->letra,aux->proc,aux->chegada);
               printf("  |                                ");
               if(aux->proc<t){
                 t = aux->proc;
                 aux2 = aux;
               }
            }

            aux=aux->next;

        }
        printf("Processo dentro da CPU: ");
        if(aux2!=NULL){

            printf("%c",aux2->letra);
            aux2->proc--;

            if(aux2->proc==0){
                remove(aux2);
            }

        }else{
            sum++;
        }

        printf("\n  |\n----------------------------------------------------------------------------------------");
        if(tempo==sum-1){
           printf("\n\n");
           return;
        }
        printf("\n  |\n");

     }

     void remove(Node* aux2){

        if(aux2 == first || c == 1){
           popFront();
           return;
        }

        if(aux2==last){
            popBack();
            return;
        }

        Node* aux=first;

        while(aux!=NULL){

            if(aux->next==aux2){
                aux->next=aux2->next;
                delete(aux2);
                c--;
                return;
            }

            aux=aux->next;

        }

     }

};

int main(){

    setlocale(LC_ALL, "Portuguese");

    List SRT;

    char letra;
    int chegada;
    int processamento;
    int n;

    printf("Digite quantos processos serão lidos: ");
    scanf("%d%*c",&n);


    for(int i = 0 ; i < n ; i++){

        scanf("%c %d %d%*c",&letra,&chegada,&processamento);

        SRT.pushBack(letra,chegada,processamento);

    }

    printf("\n");

    for(int i = 0 ; i < SRT.soma() ; i++){

        SRT.verificar(i);

    }

    printf("\n\n");
    printf("                                                       Algoritmo de Simulação de Escalonamento de Processos baseado no modelo Shortest Remaining Time (SRT).\n\n");
    printf("                                                                                                   Produced by:\n"                                               );
    printf("                                                                                       Alexssander José de Oliveira de Castro\n"                                 );
    printf("                                                                                                Lucas Amaral Luciano\n"                                          );
    printf("                                                                                              Pablo Vinícius Lima Souza\n"                                       );

    return 0;
}
