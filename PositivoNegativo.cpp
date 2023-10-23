
#include <iostream>

using namespace std;

int main()
{
    int A; 
    
    std::cout<<"Digite um numero"<<endl;
    std::cin>>A;
    
    if(A<0){
       std::cout<<"O numero é "<<A<<" sendo ele negativo";
    }
    
    else if(A>0){
       std::cout<<"O numero é "<<A<<" sendo ele positivo";
    }
    
    else{
       std::cout<<"O numero é 0";
    }


    return 0;
}
