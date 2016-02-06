#include <iostream>
using namespace std;
int diferencia(int a, int b){
return (a-b);}
int multiplicacion(int a , int b){
return (a*b);
}
int divicion(int a, int b){
return (a/b);
}
int residuo(int a, int b){
return (a%b);
}
int main()
{
  int x, y, r, m, d, re;
cout<<"ingrese el primer valor"<<endl;
cin>>x;
cout<<"ingrese el segundo valor"<<endl;
cin>>y;
r=diferencia (x,y);
m=multiplicacion(x,y);
d=divicion(x,y);
re=residuo(x,y);
cout<< "la resta es "<<r<< endl;
cout<< "la multiplicacion es "<<m<< endl;
cout<< "la divicion "<< d<< endl;
cout<< "el reciduo "<< re;
}
