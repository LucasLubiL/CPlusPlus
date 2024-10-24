#include <iostream>

using namespace std;

struct Node{

    string lingua,frase;
    Node* next;

    Node(){
       next=NULL;
    }

    Node(string lingua_,string frase_){

        lingua=lingua_;
        frase=frase_;
        next=NULL;

    }

};

struct Lista{

     Node* first;
     Node* last;

     Lista(){
        first=NULL;
        last=NULL;
     }

     bool empty(){
        return first==NULL;
     }

     void pushBack(string lingua, string frase){
        Node* n = new Node(lingua,frase);
        if(empty()){
            first=n;
            last=n;
            return;
        }
        last->next=n;
        last=n;
     }

     void conferir(string nome,string lingua){
       Node* aux = first;
       while(aux!=NULL){
            if(aux->lingua==lingua){
                cout<<nome<<endl;
                cout<<aux->frase<<endl;
                cout<<endl;
            }
            aux=aux->next;
       }
     }

};

int main()
{

    Lista ord;

    string lingua;
    string frase;
    string nome;
    int um, dois;
    int aux;

    scanf("%d",&um);

    cin.ignore();

    for(int i=0;i<um;i++){
        getline(cin,lingua);
        getline(cin,frase);
        ord.pushBack(lingua,frase);
    }

    scanf("%d",&dois);
    cin.ignore();

    for(int i=0;i<dois;i++){
       getline(cin,nome);
       getline(cin,lingua);
       ord.conferir(nome,lingua);
    }

    return 0;
}
