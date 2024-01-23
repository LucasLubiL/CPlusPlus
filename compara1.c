#include <string.h>
#include <stdio.h>


int main()
{
    char vetor[3000];
    char vetor2[3000];
    scanf("%s",vetor);
    scanf("%s",vetor2);
    if(strcmp(vetor,vetor2)==0){
        printf("1\n");
    }  else{
         printf("0\n");
    }

    return 0;
}
