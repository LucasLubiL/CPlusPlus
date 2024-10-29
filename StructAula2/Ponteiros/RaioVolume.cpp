#include <stdio.h>
#include <math.h>
#define pi 3.14

void ler(float R,float *A, float *V){

    *A=4*pi*pow(R,2);
    *V=pow(R,3)*pi*4/3;

}

int main(){

   float A,V;
   float R;

   scanf("%f",&R);

   ler(R,&A,&V);

   printf("A = %.0f\n",A);
   printf("V = %.0f\n",V);


  return 0;
}
