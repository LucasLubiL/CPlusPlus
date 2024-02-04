#include<bits/stdc++.h>

using namespace std;


int main()
{

  int N, resto, base = 2, soma = 0, i = 0;
  long long int num;
  int vetor[10000];


  cin >> N;

  for(int j=0;j<N;j++){
   cin >> num;
   i=0;
   soma=0;
   base=2;


  while (num > 0) {
    resto = num % 10;
    soma = soma + (resto * pow(base, i));
    num = num / 10;
    i += 1;
  }
    vetor[j]=soma;
  }

  for(int j=0;j<N;j++){
    cout<<vetor[j]<<endl;

  }






    return 0;
}
