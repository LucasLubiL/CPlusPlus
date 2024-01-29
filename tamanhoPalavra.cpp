#include<bits/stdc++.h>

using namespace std;

int main()
{

    int numero;
    cin >> numero;
    vector<string> palavras(numero);
    vector<int> tam(numero);



    for(int i = 0 ; i < numero ; i++){
        cin >> palavras[i];
        tam[i] = palavras[i].size();
    }

     for(int i = 0 ; i < numero ; i++){
         for(int j = 0 ; j < (numero - i - 1) ; j++){
            if(tam[j] > tam[j+1] || (tam[j] == tam[j + 1] && palavras[j] > palavras[j + 1])){
               string aux = palavras[j];
               palavras[j] = palavras[j+1];
               palavras[j+1] = aux;

               int temp = tam[j];
               tam[j] = tam[j + 1];
               tam[j + 1] = temp;
            }

        }
    }

    for (int i = 0; i < numero; i++){
        cout << palavras[i] << " " << endl;
    }
}

