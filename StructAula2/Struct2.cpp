#include<stdio.h>

struct cliente(){

     char nome[100];
     char sexo;
     char data;
     int dia, mes, ano;
     int idade;

     void ler(){

       printf("Digite seu nome: ")
       scanf("%[^\n]",nome);

       printf("Digite seu sexo: ");
       scanf("%c",&sexo);

       nascimento();

     }


     void nascimento(){

        printf("Digite sua data de nascimento:")
        scanf("%d/%d/%d",&dia,&mes,&ano);

        idade = ano-2024;

     }





};

int main() {


     cliente um;

     um.ler;


    return 0;
}
