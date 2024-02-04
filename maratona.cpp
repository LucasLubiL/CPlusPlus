#include<bits/stdc++.h>

using namespace std;

//PIRATA

int main()
{
    double x1,x2,y1,y2;
    double sub1,sub2;

    cin>>x1>>y1>>x2>>y2;

    sub1=((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));

    double raiz=sqrt(sub1);

    cout<<fixed<<setprecision(3)<<raiz;

    return 0;
}
