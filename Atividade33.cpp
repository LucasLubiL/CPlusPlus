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

    cout<<"Digite o primeiro n�mero"<<endl;
    cin>>A;

    cout<<"Digite o segundo n�mero"<<endl;
    cin>>B;

    if(A==B){
        soma=A+B;
        cout<<"A soma � de : "<<soma<<endl;
    }

    else if(A<B){
        sub=B-A;
        cout<<"A subtra�ao de B para A � de : "<<sub<<endl;
    }

    if(B<A){
        mult=A*B;
        cout<<"A multplica��o de A e B � de : "<<mult<<endl;
    }

    return 0;
}
