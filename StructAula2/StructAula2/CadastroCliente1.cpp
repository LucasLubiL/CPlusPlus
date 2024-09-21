/*1. Criar uma struct para armazenar um cliente, contendo os seguintes dados: nome, data de nascimento, idade e sexo. O sexo é apenas uma letra (M ou F)
e a data de nascimento deve ser armazenada numa struct de data, com 3 inteiros (dia, mês e ano). A idade deve ser calculada quando a data de nascimento
for lida, e não solicitada ao usuário. Guarde a data atual numa variável da struct de data e crie uma função para calcular a idade.

Após isso, criar um menu com 2 opções: cadastrar cliente e listar clientes. Na primeira, um cliente deve ser lido e na segunda exibidos todos os clientes
em ordem de cadastro.Trate para que seu aplicativo armazene no máximo 50 clientes ao mesmo tempo.
*/

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
