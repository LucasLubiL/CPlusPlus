#include <stdio.h>
#include <cmath>

void ler(float num,float *antes,float *depois){

    *antes=(int)num;
    *depois=(num-*antes)*100;

}

int main(){

   float num;
   float antes,depois;

   scanf("%f",&num);

   ler(num,&antes,&depois);

   printf("%.0f\n",antes);
   printf("%.0f",depois);



  return 0;
}
