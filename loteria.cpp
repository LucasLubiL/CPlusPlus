#include<bits/stdc++.h>

using namespace std;

int main() {

    int vetor[10];
    int n,aux,maior;

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>vetor[i];

    }
    maior=0;
    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++) {
           if(vetor[i]>vetor[j]){
              aux=vetor[i]-vetor[j];
           }else{
               aux=vetor[j]-vetor[i];
           }

           if(maior<aux){
            maior=aux;
           }
       }
    }
    cout<<maior;

    return 0;
}
