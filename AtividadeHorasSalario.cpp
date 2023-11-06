#include <iostream>

using namespace std;

int main()
{
  int Numero;
  double Horas;
  double Valor;
  double Salario;
  
  std::cout<<"Digite o numero de crachá do funcionário"<<std::endl;
  std::cin>>Numero;
  std::cout<<"Funcionário "<<Numero<<std::endl;
  
  std::cout<<"Digite o número de horas trabalhadas"<<std::endl;
  std::cin>>Horas;
  std::cout<<Horas<<" Horas trabalhadas no mês"<<std::endl;
  
  std::cout<<"Digite o valor ganho por hora trabalhada"<<std::endl;
  std::cin>>Valor;
  std::cout<<Valor<<" Reais por hora trabalhada"<<std::endl;
  
  Salario=Horas*Valor;
  
  std::cout<<"O salario a ser pago é de "<<Salario<<std::endl;
  
 return 0;
}