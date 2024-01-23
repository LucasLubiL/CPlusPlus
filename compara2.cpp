#include <bits/stdc++.h>

int main()
{
    char vetor[3000];
    char vetor2[3000];
    scanf("%99[^\n] %99[^\n]",vetor,vetor2);
    if(strcmp(vetor,vetor2)==0){
        printf("1\n");
    }  else{
         printf("0\n");
    }

    return 0;
}

