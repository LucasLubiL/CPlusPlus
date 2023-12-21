#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int mat[3][3];
    int soma;
    int menor;
    int maior;
    int resultado;

    for(int l=0; l<3; l++){
        for(int c=0; c<3; c++){
            cout<<"Digite um número"<<endl;
            cin>>mat[l][c];
        }
    }
    menor=mat[0][0];
    for(int l=0; l<3; l++){
        for(int c=0; c<3; c++){
            cout<<mat[l][c]<<" ";
            if(menor>mat[l][c]){
                menor=mat[l][c];
            }
            if(maior<mat[l][c]){
                maior=mat[l][c];
            }
        }
        cout<<""<<endl;
    }

    for(int l=0; l<3; l++){
        for(int c=0; c<3; c++){
            if(l==c){
                soma=soma+mat[l][c];
            }
        }
    }

    resultado=soma*(maior-menor);

    cout<<"A soma da diagonal principal é de : "<<soma<<endl;
    cout<<"O maior número da matriz é : "<<maior<<endl;
    cout<<"O menor número da matriz é : "<<menor<<endl;
    cout<<"O resultado final é de : "<<resultado<<endl;



    return 0;
}
