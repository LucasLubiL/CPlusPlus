#include<bits/stdc++.h>

int main()
{
    char vetor[1000];
    char vetor2[1000];
    int tam,tam2,cont1,cont2;

    scanf("%[^\n]s",vetor);
    fflush(stdin);
    scanf("%[^\n]s",vetor2);
    tam= strlen(vetor);
    tam2= strlen(vetor2);

    if(strcmp(vetor,vetor2)==0 || (tam!=tam2)){
        printf("nao");
        return 0;
    }

    for(int i=0 ; i<tam; i++){
        cont1=0;
        cont2=0;
        for(int c=0 ; c<tam; c++){
            if(vetor[i]==vetor[c]){
                   cont1++;
            }
        }
        for(int a=0; a<tam2; a++){
            if(vetor[i]==vetor2[a]){
                cont2++;
            }
        }
        if(cont1!=cont2){
            printf("nao");
            return 0;
        }
    }
    printf("sim");
    return 0;
}
