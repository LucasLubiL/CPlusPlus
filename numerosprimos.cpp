#include<bits/stdc++.h>

using namespace std;
//BINARIO

int main()
{

  long long int num, N, resto, base = 2, soma = 0, i = 0;



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
    cout << soma <<endl;
  }





    return 0;
}
