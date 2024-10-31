#include <iostream>

struct Node{
    
    int valor;
    Node* next;
    
    Node(){
        valor=0;
        next=NULL;
    }
    
    Node(int value){
        valor=value;
        next=NULL;
    }
   
};

struct List{
    
    Node* first;
    Node* last;
    int c;
    
    List(){
        first=NULL;
        last=NULL;
        c=0;
    }
    
    bool empty(){
        return first==NULL;
    }
    
    void pushBack(int value){
        c++;
        Node* n = new Node(value);
        if(empty()){
            first=n;
            last=n;
            return;
        }
        last->next=n;
        last=n;
    }
    
    void verificar(){
        
        int cM=-1;
        Node* aux=first;
        Node* aux2=first->next;
        
        while(aux2!=NULL){
            
            if(aux2->valor>aux->valor){
                
                if(cM==1){
                    printf("0\n");
                    return;
                }else{
                    cM=1;
                }
                
            }else if(aux2->valor<aux->valor){
                
                if(cM==0){
                    printf("0\n");
                    return;
                }else{
                    cM=0;
                }
               
            }else if(aux2->valor==aux->valor){
                printf("0\n");
                return;
            }
            
            aux=aux->next;
            aux2=aux2->next;
         
        }
        
        printf("1\n");
        
    }
    
};
    
int main(){
    
    List l;
    
    int n,x;
    
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        l.pushBack(x);
    }
    
    l.verificar();


    return 0;
}