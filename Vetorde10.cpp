#include <iostream>

using namespace std;

int main(){
    
    int vet[9];
    
    for(int i=0; i<10;i++){
       std::cout<<"Digite um número"<<std::endl;
       std::cin>>vet[i];
       
       if(vet[i]<=0){
           vet[i]=1;
           
       }
    }
    
    for(int i=0; i<10;i++){
      std::cout<<vet[i]<<" ";
    }
    return 0;
}