#include<stdio.h>

struct Data{

     int dia, mes, ano;
     int idade;

     void ler(){

         printf("Digite sua data de nascimento:");
         scanf("%d/%d/%d",&dia,&mes,&ano);

         idade = 2024-ano;

         if(9<mes || 9==mes && 21<dia){
            idade--;
         }

     }

};

struct Cliente{

     char nome[100];
     char sexo;
     int idade;
     int dia , mes , ano;

     void ler(){

       printf("Digite seu nome: ");
       scanf(" %[^\n]",nome);

       printf("Digite seu sexo: ");
       scanf(" %c",&sexo);

       Data nascimento;
       nascimento.ler();

       idade = nascimento.idade;
       dia=nascimento.dia;
       mes=nascimento.mes;
       ano=nascimento.ano;

     }

};

struct Imprimir{

    Cliente cliente[50];

    int cont=0;

    void lista(){

       cliente[cont].ler();
       cont++;

    }

    void listaCliente(){

      for(int i=0;i<cont;i++){

        printf("\n");
        printf("Nome: %s\n",cliente[i].nome);
        printf("Sexo: %c\n",cliente[i].sexo);
        printf("Idade: %d\n",cliente[i].idade);
        printf("Data de Nascimento: %02d/%02d/%d\n",cliente[i].dia,cliente[i].mes,cliente[i].ano);
        printf("\n");

      }

    }

};

int main() {

     int op=1;

     Imprimir cliente;

     while(op!=0){

        printf("Escolha qual operação deseja fazer:\n");
        printf("Digite 1 - Cadastrar Cliente.\n");
        printf("Digite 2 - Listar Clientes.\n");
        printf("Digite 0 - Finalizar Operação.\n");
        scanf("%d",&op);

        if(op==1){

            cliente.lista();

        }else if(op==2){

            cliente.listaCliente();

        }

     }

    return 0;
}
