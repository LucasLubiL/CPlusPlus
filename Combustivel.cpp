//Um posto de gasolina deseja determinar qual de seus produtos é a preferência de seus clientes. 
//Escreva um programa para ler o tipo de combustível fornecido 
//(codificado da seguinte forma: 1. Álcool 2. Gasolina 3. Diesel 4. Fim). 
//Caso você insira um código inválido (fora do intervalo de 1 a 4) um novo código deverá ser solicitado. O programa terminará quando o código inserido for o número 4.

#include <stdio.h>
#include <iostream>

int main()
{   
    int opcao;
    int alcool;
    int gasolina;
    int diesel;
    
    while(opcao != 4){ 
    
        std::cout<<"Escolha qual opção de combusível deseja escolher:"<<std::endl;
        std::cout<<""<<std::endl;
        std::cout<<"Digite 1 para Álcool."<<std::endl;
        std::cout<<"Digite 2 para Gasolina."<<std::endl;
        std::cout<<"Digite 3 para Diesel."<<std::endl;
        std::cout<<"Digite 4 para Sair."<<std::endl;
        std::cin>>opcao;
    
        if(opcao==1){
            std::cout<<"Você acaba de abastecer com Álcool"<<std::endl;
            alcool=alcool+1;
        }
        
        else if(opcao==2){
            std::cout<<"Você acaba de abastecer com Gasolina"<<std::endl;
            gasolina=gasolina+1;
        }
        
        if(opcao==3){
            std::cout<<"Você acaba de abastecer com Diesel"<<std::endl;
            diesel=diesel+1;
        }
        
        if(opcao==4){
            std::cout<<"Menu Encerrado."<<std::endl;
        }
    }
    
    std::cout<<"Quantidade abastecida com Álcool:"<<alcool<<std::endl;
    std::cout<<"Quantidade abastecida com Gasolina:"<<gasolina<<std::endl;
    std::cout<<"Quantidade abastecida com Disel:"<<diesel<<std::endl;
    
    return 0;
}
