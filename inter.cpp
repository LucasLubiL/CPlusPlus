#include<bits/stdc++.h>

using namespace std;

//PRIMOS

int main()
{
    int A,B,aux,divi,x;


    cin>>A>>B;

    if(A>B){
        aux=A;
        A=B;
        B=aux;
    }
    for(int i=A;i<=B;i++){
        x=0;
        for(int j=i-1;j>1;j--){
            divi=i%j;
            if(divi==0){
                x=1;

            }


        }
        if(x!=1){

            cout<<i<<" ";
        }


    }

    return 0;
}
