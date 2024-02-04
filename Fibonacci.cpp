#include<bits/stdc++.h>

using namespace std;

int main()
{
    int resultado;
    int vet[45];
    vet[1]=1;
    vet[0]=1;
    int N;
    int i;

    cin>>N;
    for(int i=2 ; i<N ; i++){
        resultado=vet[0]+vet[1];
        vet[0]=vet[1];
        vet[1]=resultado;
    }
    cout<<resultado<<endl;

    return 0;
}
