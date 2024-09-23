#include <stdio.h>

struct Ler{

   int num;

   void ler(){

     printf("Digite os numeros:\n");
     for(int i=0;i<10;i++){
        scanf("%d",&num);
     }
     printf("\n");

   }

};


struct Conjunto{

    int vetor[20];
    int cont1=0;
    int cont2=0;
    int cont3=0;
    int op;

    Ler tudo[20];

    void criar(){

       if(cont1==20){
           printf("Nao existe mais espacos para conjuntos serem criados.");
           printf("\n");
           printf("\n");
       }else{
           cont1++;
           vetor[cont1];

           printf("O(s) seguinte(s) conjunto(s) criado(s): \n");
           for(int i=0;i<cont1;i++){
               printf("%d - ",i);
           }
           printf("\n");
           printf("\n");
       }

    }

    void ler(){

       if(cont1==0){
           printf("Nao ha o que ser preenchido.\n");
           printf("\n");
       }else{
          printf("Escolha um do(s) seguinte(s) conjunto(s) para ler:\n");
          for(int i=0;i<cont1;i++){
             printf("%d - ",i);
          }
          scanf("%d%*c",&op);
          printf("\n");

          tudo[op].ler();
       }

    }

};

int main(){


  Conjunto tudo;

  int op=1;

  while(op!=0){

    printf("Digite qual operacao deseja fazer: \n");
    printf("Digite 1 - Criar um conjunto.\n");
    printf("Digite 2 - Ler dados de um conjunto.\n");
    printf("Digite 3 - Fazer a união de dois conjuntos.\n");
    printf("Digite 4 - Fazer a interseção de dois conjuntos.\n");
    printf("Digite 5 - Imprimir um conjunto.\n");
    printf("Digite 0 - Fechar sistema.\n");
    scanf("%d%*c",&op);

    if(op==1){
        printf("\n");
        tudo.criar();
    }else if(op==2){
        printf("\n");
        tudo.ler();
    }else if(op==3){
        printf("\n");
        tudo.juntar();
    }


  }





  return 0;
}
