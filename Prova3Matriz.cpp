//Escreva um programa que tenha um menu com 3 opções: 
//1) Preencher Matriz manualmente. 
//2) Imprimir matriz completa em linhas e colunas. 
//3) Imprimir menor elemento da minha matriz. Cada uma dessas funcionalidades deve ser uma função diferente.


#include <iostream>

using namespace std;

int main()
{
    int escolha;
    int Vetor[3] [3];
    int menor;
    
    
    while(escolha != 4){
        
      std::cout<<"Escolha uma das opções abaixo"<<std::endl;
      std::cout<<""<<std::endl;
      std::cout<<"Digite 1 para preencher matriz"<<std::endl;
      std::cout<<"Digite 2 para imprimir a matriz"<<std::endl;
      std::cout<<"Digite 3 para imprimir o menor valor da matriz"<<std::endl;
      std::cout<<"Digite 4 para para sair"<<std::endl;
      std::cin>>escolha;
      
        if(escolha==1){
         
            for(int l=0; l<4; l++) {
                for(int c=0; c<4; c++){
                        std::cout<<"Digite um numero"<<std::endl;
                        std::cin>>Vetor[l][c];
                } 
            } 
        }
        else if(escolha==2){
            
            for(int l=0; l<4; l++) {
                for(int c=0; c<4; c++){
                    std::cout<<Vetor[l] [c];
                }
            std::cout<<""<<std::endl;
            }
        }
        if(escolha==3){
            menor=Vetor[0] [0];
            for(int l=0; l<4; l++) {
                for(int c=0; c<4; c++){
                    if(menor>Vetor[l] [c]){
                    menor=Vetor[l] [c];
                    }
                }
            }
        std::cout<<"O menor numero da matriz é de "<<menor<<std::endl;
        }
    }
    
    std::cout<<"Programa encerrado"<<std::endl;
    return 0;
}