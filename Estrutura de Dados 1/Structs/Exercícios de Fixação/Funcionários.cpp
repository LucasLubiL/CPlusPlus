#include <stdio.h>
#include <string.h>

struct Func{

   char nome[100];
   char cargo[100];
   double salario;
   double beneficio;
   double desconto;

   double ler(){

     printf("Nome:");
     scanf("%[^\n]%*c",nome);
     printf("Cargo:");
     scanf("%[^\n]",cargo);
     printf("Salario:");
     scanf("%lf",&salario);
     printf("Beneficio:");
     scanf("%lf",&beneficio);
     printf("Desconto:");
     scanf("%lf%*c",&desconto);
     printf("\n");

     return salario+beneficio-desconto;
  }

  void imprimir(){

     printf("Funcionario: %s\n",nome);
     printf("Cargo: %s\n",cargo);
     printf("Salario liquido: %.2lf\n",salario+beneficio-desconto);
     printf("Beneficio: %.2lf\n",beneficio);
     printf("Desconto: %.2lf\n",desconto);
     printf("\n");

  }

};

struct Lista{

  char nome[100];
  char cargo[100];
  double salario;
  double beneficio;
  double desconto;

  Func funcionario[10];

  double maior=0;
  int ganha;
  double soma=0;
  int cont=0;

  void func(){

     double temp;

     temp=funcionario[cont].ler();
     cont++;

     soma+=temp;

     if(temp>maior){

        maior=temp;
        ganha=cont-1;

     }

  }

   void imprimir(){
       for(int i=0;i<cont;i++){
           funcionario[i].imprimir();
     }

   }

   void tudo(){

    printf("O funcionario que mais recebe e: %s\n",funcionario[ganha].nome);
    printf("A media salarial da empresa e de: %.2lf\n",soma/cont);
    printf("\n");

   }

};

int main() {

    Lista funcionario;

    int op=1;

    while(op!=0){

        printf("Digite qual operacao deseja fazer:\n");
        printf("Digite 1 - cadastrar funcionario.\n");
        printf("Digite 2 - mostrar dados dos funcionarios.\n");
        printf("Digite 3 - media salarial da empresa e o funcionario que mais recebe na empresa.\n");
        scanf("%d%*c",&op);
        printf("\n");

        if(op==1){
            funcionario.func();
        }else if(op==2){
            funcionario.imprimir();
        }else if(op==3){
            funcionario.tudo();
        }

    }

    return 0;
}
