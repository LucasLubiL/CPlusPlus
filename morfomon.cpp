#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    string tipo;
    int quant;
    string alimento;

    while(tipo!="foguento" && tipo!="aguado" && tipo!="planta"){
        cout<<"Escolha o tipo do seu morfomon"<<endl;
        cout<<"foguento."<<endl;
        cout<<"aguado"<<endl;
        cout<<"planta"<<endl;
        cin>>tipo;
    }

    if(tipo=="foguento"){
        cout<<"Seu morfomon � : foguento"<<endl;
    }
    else if(tipo=="aguado"){
        cout<<"Seu morfomon � : aguado"<<endl;
    }
    if(tipo=="planta"){
        cout<<"Seu morfomon � : planta"<<endl;
    }

    cout<<"Digite a quantidade de vezes que vc ir� alimenta-lo"<<endl;
    cin>>quant;

    for(int i=0; i<quant; i++){
        cout<<"Escolha um dos alimentos para dar ao seu morfomon"<<endl;
        cout<<"alface."<<endl;
        cout<<"burrito."<<endl;
        cout<<"refrigerante."<<endl;
        cin>>alimento;
        if(alimento=="burrito"){
            cout<<"O morfomon acaba de comer um burrito"<<endl;
            tipo="foguento";
            cout<<"Agora ele � : "<<tipo<<endl;
        }

        else if(alimento=="alface"){
            cout<<"O morfomon acaba de comer alface"<<endl;
            tipo="planta";
            cout<<"Agora ele � : "<<tipo<<endl;
        }

        if(alimento=="refrigerante"){
            cout<<"O morfomon acaba de tomar refrigerante"<<endl;
            tipo="aguado";
            cout<<"Agora ele � : "<<tipo<<endl;
        }
    }

        cout<<"Agora seu morfomon passou a ser : "<<tipo<<endl;

    return 0;
}
