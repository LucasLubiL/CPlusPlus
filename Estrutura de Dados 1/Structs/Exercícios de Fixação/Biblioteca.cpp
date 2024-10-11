#include <stdio.h>


struct Cadastro{

    char titulo[100];
    char autor[100];
    int pag;

    int ler(){

       printf("Tetulo do livro: ");
       scanf("%[^\n]",titulo);

       printf("Autor do livro: ");
       scanf(" %[^\n]",autor);

       printf("Numero de paginas: ");
       scanf("%d%*c",&pag);

    return pag;

    }

    void imprimir(){

       printf("Titulo do livro e: %s\n",titulo);
       printf("Autor do livro e: %s\n",autor);
       printf("Numero de paginas e: %d\n",pag);
       printf("\n");

    }

};

struct Biblioteca{

    Cadastro livro[10];

    int cont=0;
    int pag;
    int maior=0;
    int indice;

    void ler(){

        pag=livro[cont].ler();
        cont++;

        if(pag>maior){

           indice=cont-1;
           maior=pag;

        }
    }

    void imprimir(){

        for(int i=0;i<cont;i++){
            livro[i].imprimir();

        }
    }

    void mais(){

        printf("O livro com mais paginas e '%s' contendo '%d' paginas criada pelo autor '%s'\n",livro[indice].titulo,maior,livro[indice].autor);
        printf("\n");

    }

};

int main(){

   Biblioteca livro;

   int op=1;

   while(op!=0){

       printf("Digite qual operacao voce deseja fazer:\n");
       printf("Digite 1 - cadastrar livro.\n");
       printf("Digite 2 - imprimir livros.\n");
       printf("Digite 3 - livro com mais paginas.\n");
       printf("Digite 0 - finalizar sistema\n");
       scanf("%d%*c",&op);

       if(op==1){

          livro.ler();

       }else if(op==2){

          livro.imprimir();

       }else if(op==3){

          livro.mais();
       }

   }

   return 0;
}
