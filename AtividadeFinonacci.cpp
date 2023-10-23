#include <iostream>

using namespace std;

int main()
{
    
    int resultado;
    int vet[2];
    vet[0]=1;
    vet[1]=1;
    
    for(int i=0 ; i<9 ; i++){
        resultado=vet[0]+vet[1];
        std::cout<<vet[0]<<"+"<<vet[1]<<"="<<resultado<<endl;
        vet[0]=vet[1];
        vet[1]=resultado;
        
        
    }

    return 0;
}
