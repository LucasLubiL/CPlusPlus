#include<bits/stdc++.h>

using namespace std;



int main()
{
    int N;
    double nota,inter,inter2;

    cin>>N;

    for(int i=0;i<N;i++){
        cin>>nota>>inter>>inter2;
        if(nota<inter && nota>inter2 || nota>inter && nota<inter2){
            cout<<"True"<<endl;
        }
        else{
            cout<<"False"<<endl;
        }
    }
    return 0;
}
