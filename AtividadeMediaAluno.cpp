#include <iostream>

using namespace std;

int main()
{

 double A;
 double B;
 double C;
 double Media;
 
 std::cout<<"Digite a nota do primeiro aluno"<<std::endl;
 std::cin>>A;
 
 std::cout<<"Digite a nota do segundo aluno"<<std::endl;
 std::cin>>B;
 
 std::cout<<"Digite a nota do terceiro aluno"<<std::endl;
 std::cin>>C;
 
 Media=(A+B+C)/3;
 
 std::cout<<" Media = "<<Media;
 return 0;
}