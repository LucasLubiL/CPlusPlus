#include <iostream>

using namespace std;

int main()
{
    int questao;
    int opcao=1;
    int a,b,c,d,e;
    while(opcao!=0){

    cout<<"Quantas questoes ele respondeu"<<endl;
    cin>>questao;

    for(int n=0; n<questao; n++){
        cout<<"Digite o numero da cor da questao"<<endl;
        cin>>a;
        cin>>b;
        cin>>c;
        cin>>d;
        cin>>e;

        if(a<=127 && b>127 && c>127 && d>127 && e>127){
           cout<<"A"<<endl;
        }
        else if(b<=127 && a>127 && c>127 && d>127 && e>127){
           cout<<"B"<<endl;
        }
        else if(c<=127 && b>127 && a>127 && d>127 && e>127){
           cout<<"C"<<endl;
        }
        else if(d<=127 && b>127 && c>127 && a>127 && e>127){
           cout<<"D"<<endl;
        }
        else if(e<=127 && b>127 && c>127 && d>127 && a>127){
           cout<<"E"<<endl;
        }
        else{
            cout<<"*"<<endl;
        }

    }
    cout<<"Deseja continuar a correçao?"<<endl;
    cout<<"0 para sair"<<endl;
    cin>>opcao;
    }

    return 0;
}
