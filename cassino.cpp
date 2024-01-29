#include<bits/stdc++.h>

using namespace std;

int main()
{
    int aux,j;
    int vetor[13]={10,11,12,4,6,5,8,7,9,1,2,13,3};

    for(int i=0;i<13-1;i++){
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

    for(int i=0;i<13;i++){

        if(vetor[i]==1){
            cout<<"A ";
        }
        else if(vetor[i]==11){
            cout<<"J ";
        }
        else if(vetor[i]==12){
            cout<<"Q ";
        }
        else if(vetor[i]==13){
            cout<<"K ";
        }
        else{
            cout<<vetor[i]<<" ";
        }
    }

    return 0;
}
