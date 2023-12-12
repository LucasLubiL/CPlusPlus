//Dada uma matriz quadrada NxN do tipo inteiro. Construa uma função que retorne a soma dos elementos que estão em sua diagonal secundária. 
//A impressão da soma deve acontecer na função principal, após a chamada da função SOMADIAGONAL. 
//A matriz para teste feita por você pode ser 3x3 ou 5x5, mas tenha em mente que esse número poderia ser qualquer um, 
//logo não poderá fazer a impressão selecionando manualmente cada uma das posições da matriz, e sim criar uma forma de fazer essa seleção dinamicamente, 
//que funcione para qualquer matriz NxN.

#include <iostream>

int main()
{
    int vetor[4][4];
    int soma;
    
    for(int l=0; l<5; l++){
        for(int c=0; c<5; c++){
            std::cout<<"Digite um número"<<std::endl;
            std::cin>>vetor[l][c];
        }
    }
    
    for(int l=0; l<5; l++){
        for(int c=0; c<5; c++){
            std::cout<<vetor[l][c]<<" ";
        }
        std::cout<<""<<std::endl;
    }
    
    for(int l=0; l<5; l++){
        for(int c=0; c<5; c++){
            if(l+c==4){
            soma=soma+vetor[l][c];
            }    
        }    
    }
    
    std::cout<<"A soma dos valores da matriz diagonal é de "<<soma<<std::endl;
    return 0;
}
