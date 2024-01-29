#include<bits/stdc++.h>

using namespace std;




int main()
{
    int n,aux,j,m;
    cin>>n;
    int vetor[100];
    int vetor2[100];

    for(int i=0;i<n;i++){
        cin>>vetor[i];
    }

    for(int i=0;i<n-1;i++){
        if(vetor[i]>vetor[i+1]){
            aux=vetor[i+1];
            vetor[i+1]=vetor[i];
            vetor[i]=aux;
            j=i-1;
            while(j>=0){
              if(aux<vetor[j]){
                vetor[j+1]=vetor[j];
                vetor[j]=aux;
              }else{
                  break;
              }
              j=j-1;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(vetor[i]%2!=0){
            cout<<vetor[i]<<" ";
        }
    }
    for(int i=0;i<n;i++){
        if(vetor[i]%2==0){
            cout<<vetor[i]<<" ";
        }
    }




    return 0;
}
