//O primeiro vetor deve ser preenchido pelo usuário, o segundo vetor deve ser preenchido de forma aleatória. 
//Faça uma função que, após esses preenchimentos, seja chamada para realizar e mostrar na tela a impressão da soma dos elementos desses vetores, 
//baseadas em seu índice. Exemplo: vetorA[0] + vetorB[0] devem ser mostrados em uma linha. vetorA[1] + vetorB[1] na próxima linha, e assim por diante. 
//Lembre-se de usar modularização para fazer esse programa. Também lembre-se que não deve fazer impressões manuais elemento por elemento.

#include <iostream>
#include <cstdlib>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int vetorM[3];
    int vetorU[3];
    srand(time(0));
    
    for(int l=0; l<4; l++){
        std::cout<<"Digite um número"<<std::endl;
        std::cin>>vetorU[l];
    }
    
    
    for(int l=0; l<4; l++){
        std::cout<<vetorU[l];
    }
    
    
    for(int c=0; c<4; c++){
        vetorM[c]=rand()%11;    
        std::cout<<vetorM[c];   
    }
    
   
    return 0;
}
