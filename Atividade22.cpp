#include <iostream>
#include <locale.h>

using namespace std;



int main()
{
    setlocale(LC_ALL, "Portuguese");
    double real[3];
    double dolar[3];
    double conversao;
    int d;
    double somaDolar;
    double somaReal;
    double media;

    for(int r=0; r<3; r++){
        cout<<"Digite o valor do produto de n�mero "<<r<<" : "<<endl;
        cin>>real[r];
    }

    for(int r=0; r<3; r++){
        conversao=real[r]*4.84;
        dolar[d]=conversao;
        d=d+1;
        somaReal=somaReal+real[r];
    }

    media=somaReal/3;

    for(int d=0; d<3; d++){
        cout<<"O valor em d�lar do produto de n�mero "<<d<<" : "<<dolar[d]<<endl;
        somaDolar=somaDolar+dolar[d];
    }

    cout<<"A soma total em d�lares � de : "<<somaDolar<<" dolares"<<endl;
    cout<<"A media em reais � de : "<<media<<endl;

    return 0;
}
