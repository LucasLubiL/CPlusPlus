#include <iostream>
#define TAM 20

struct Conjunto{
    
    int vetor[20];
    int uni[20];
    int a;
    
    void ler(){
        
        printf("Digite quantos numeros ira digitar:\n");
        scanf("%d",&a);
        if(a>TAM){
            printf("Capacidade insuficiente.");
        }else{
            for(int i=0;i<a;i++){
                scanf("%d",&vetor[i]);
                
            }
        }
        printf("\n");
        
        
    }
    
    void imprimir(){
            
        for(int i=0;i<a;i++){
            printf("%d ",vetor[i]);
        }    
        printf("\n");
            
    }
    
    void uniao(Conjunto dois){
        
        int j=0;
        
        if(a+dois.a>TAM){
            
            printf("%d\n\n\n\n\n\n",a+dois.a);
            printf("Espaco insuficiente.\n");
        }else{
            for(int i=a;i<a+dois.a;i++){
                vetor[i]=dois.vetor[j];
                j++;
            }
            a=a+dois.a;
            
            for(int i=0;i<a;i++){
                printf("%d ",vetor[i]);
            }
            printf("\n");
        }
        
    }
    
    void inter(Conjunto dois){
        
        int x=0;
        int in[TAM];
        
        printf("A intersecaoo dos 2 conjuntos:\n");
        
        for(int i=0;i<a;i++){
            for(int j=0;j<dois.a;j++){
                if(vetor[i]==dois.vetor[j]){
                    in[x]=vetor[i];
                    x++;
                    break;
                }
            }
        }
        
        for(int i=0;i<x;i++){
           vetor[i]=in[i];
        }
        for(int i=0;i<x/2;i++){
           printf("%d ",vetor[i]);
        }
        
    }
 
};

int main()
{
    
    Conjunto um;
    um.ler();
    um.imprimir();
    Conjunto dois;
    dois.ler();
    dois.imprimir();
    um.uniao(dois);
    um.inter(dois);

    return 0;
}
