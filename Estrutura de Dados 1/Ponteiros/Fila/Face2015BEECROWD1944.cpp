#include <stdio.h>
#include <string>
#include <iostream>
#include <cstring>

using namespace std;

struct Node{

    char a, b, c, d;
    Node* next;
    Node* prev;

    Node(){
       next = NULL;
       prev = NULL;
    }

    Node(char _a, char _b, char _c, char _d){
        a = _a;
        b = _b;
        c = _c;
        d = _d;
        next = NULL;
        prev = NULL;
    }

};

struct Queue{

    Node* first;
    Node* last;
    int cont;

    Queue(){
       first = NULL;
       last = NULL;
       cont = 0;
    }

    bool empty(){
       return first == NULL;
    }

    int quant(){
       return cont;
    }

    void push(char _a, char _b, char _c, char _d){
        Node* n = new Node(_a, _b, _c, _d);
        if(empty()){
            first = n;
            last = n;
            return;
        }

        first -> prev = n;
        n -> next = first;
        first = n;

    }

    void verify(){

       if(empty()){
          return;
       }

       Node* aux = first -> next;
       if(first -> a == aux -> d && first -> b == aux -> c && first -> c == aux -> b && first -> d == aux -> a){
          cont++;
          Node* toDel = aux;
          Node* delTo = first;
          first = aux -> next;
          if(first == NULL){
              push('F', 'A', 'C', 'E');
          }
          delete(toDel);
          delete(delTo);
          return;
       }

    }

};


int main()
{

    Queue face;

    int n;
    char a = 'F', b = 'A', c = 'C', d = 'E';

    cin >> n;

    face.push(a , b, c, d);

    for(int i = 0; i < n; i++){

        cin >> a >> b >> c >> d;

        face.push(a, b, c, d);
        face.verify();

    }

    cout << face.quant() << endl;


    return 0;
}
