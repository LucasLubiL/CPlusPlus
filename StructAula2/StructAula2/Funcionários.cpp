#include <stdio.h>
#include <string.h>

struct Func{

   char nome[100];
   char cargo[100];
   double salario;
   double beneficio;
   double desconto;

   double maior=0;
   char ganha[100];

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

  Func funcionario[3];

  double maior=0;
  char ganha[100];
  double soma=0;

  void func(){

     for(int i=0;i<3;i++){

        double temp;

        temp=funcionario[i].ler();

        soma+=temp;

        if(temp>maior){

           maior=temp;
           strcpy(ganha,funcionario[i].nome);

        }
     }

     for(int i=0;i<3;i++){

        funcionario[i].imprimir();

     }

     tudo();
  }

  void tudo(){

    printf("O funcionario que mais recebe é: %s\n",ganha);
    printf("A media salarial da empresa é de: %.2lf\n",soma/3);

  }

};

int main() {

    Lista funcionario;
    funcionario.func();

    return 0;
}
