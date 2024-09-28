#include <stdio.h>
#include <math.h>
#define pi 3.14

void ler(int *vetor,int *mi,int *ma,int *maior,int *menor){

    if(*vetor>*maior){

        *ma=*vetor;
        *maior=*vetor;

    }
    if(*vetor<*menor){

        *mi=*vetor;
        *menor=*vetor;

    }
}

int main(){


   int maior=-10000;
   int menor=10000;
   int vetor[10];
   int mi,ma;

   for(int i=0;i<10;i++){
       scanf("%d",&vetor[i]);
       ler(&vetor[i],&mi,&ma,&maior,&menor);
   }

   printf("MAXIMO = %d\n",ma);
   printf("MINIMO = %d\n",mi);



  return 0;
}
