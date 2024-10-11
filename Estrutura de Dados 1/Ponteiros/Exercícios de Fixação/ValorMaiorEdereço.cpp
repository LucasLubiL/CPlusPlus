#include <stdio.h>

void ler(int *a, int *b, int *maior){

    if(a>b){
        *maior=*a;

    }else {
       *maior=*b;
    }

    printf("%d    %d", a, b);

}

int main(){


  int a, b;
  int maior=0;

  scanf("%d %d",&a,&b);

  ler(&a, &b, &maior);

  printf("%d",maior);




  return 0;
}
