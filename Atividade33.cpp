#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int A;
    int B;
    int soma;
    int sub;
    int mult;

    cout<<"Digite o primeiro número"<<endl;
    cin>>A;

    cout<<"Digite o segundo número"<<endl;
    cin>>B;

    if(A==B){
        soma=A+B;
        cout<<"A soma é de : "<<soma<<endl;
    }

    else if(A<B){
        sub=B-A;
        cout<<"A subtraçao de B para A é de : "<<sub<<endl;
    }

    if(B<A){
        mult=A*B;
        cout<<"A multplicação de A e B é de : "<<mult<<endl;
    }

    return 0;
}
