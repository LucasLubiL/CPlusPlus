#include <iostream>

using namespace std;

int main() {
    
    int Poder;
    int Quant;
    
    cout<<"Digite quantos personagens ira colocar"<<endl;
    cin>>Quant;
    for(int i=1;i<=Quant;i++){
      cout<<"Digite o nivel de poder"<<endl;
      cin>>Poder;
      if(Poder>=8000){
        cout<<"MAS OQUE,MAIS DE 8000???"<<endl;  
      }
      else if(Poder<=8000){
        cout<<"INSETO!";
      }  
    }
    return 0;
}  