#include <stdio.h>


struct Ler{

   int num[10];
   int junto[10];
   int cont=0;
   int aux=0;
   int aux1=0;

   void ler(){

     printf("Digite os numeros:\n");
     for(int i=0;i<10;i++){
        scanf("%d",&num[i]);
     }
     printf("\n");

   }

   void tela(){

        if(cont==0){
           for(int i=0;i<10;i++){
              junto[i]=num[i];
           }
           cont=1;
        }else{
           for(int i=0;i<10;i++){
              aux=0;
              aux1=0;
              for(int j=0;j<10;j++){
                 if(num[i]==junto[j]){
                    aux++;
                 }
                 if(num[i]==num[j]){
                     aux1++;
                 }
              }
              if(aux==0 || aux1==1){
                 printf("%d ",num[i]);
              }
           }
        }

    }

};


struct Conjunto{

    int vetor[20];
    int cont1=0;
    int cont2=0;
    int cont3=0;
    int op;
    int um, dois;

    Ler tudo[20];

    void criar(){

       if(cont1==20){
           printf("Nao existe mais espacos para conjuntos serem criados.\n\n");
       }else{
           cont1++;
           vetor[cont1];

           printf("O(s) seguinte(s) conjunto(s) criado(s): \n");
           for(int i=0;i<cont1;i++){
               printf("%d - ",i);
           }
           printf("\n\n");
       }

    }

    void ler(){

       if(cont1==0){
           printf("Nao ha o que ser preenchido.\n\n");
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

    void juntar(){

        if(cont1<2){
            printf("Nao ha conjuntos suficientes para a juncao.\n\n");
        }else{

            printf("Escolha 2 dos seguintes conjuntos para fazer a juncao:\n");
            for(int i=0;i<cont1;i++){
                printf("%d - ",i);
            }
            scanf("%d %d",&um,&dois);

            tudo[um].tela();
            tudo[dois].tela();

            printf("\n\n");
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
