#include <iostream>

using namespace std;

int main()
{
  int Um;
  int Dois;
  int diferenca;
  int vet[3];
  
  for(int i=0; i<4;i++){
      
     std::cout<<"Digite um valor"<<std::endl;
     std::cin>>vet[i];
     
    }
      
    Um=vet[0]*vet[1];
    Dois=vet[2]*vet[3];
     
    std::cout<<vet[0]<<" X "<<vet[1]<<" = "<<Um<<std::endl;
     
    std::cout<<vet[2]<<" X "<<vet[3]<<" = "<<Dois<<std::endl;  
      
      
    diferenca=Um-Dois;
    
    std::cout<<"A diferença entre as 2 multplicações é de "<<diferenca<<std::endl;
  
 return 0;
}