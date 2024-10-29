#include <stdio.h>

void ler(float *vetor){
    printf("%d ",vetor);
}

int main(){

   float vetor[10];

   for(int i=0;i<10;i++){
      scanf("%lf",&vetor[i]);
      ler(&vetor[i]);
   }

  return 0;
}
