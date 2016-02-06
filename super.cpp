#include <iostream>
using namespace std;

int superpower(int a, int b){
int t=1;
  for(int con=1;con<=b;con++)
{
t=t*a;
}
return(t);
}
int main()
{
int x, y, r;
cout<< "ingresa un numero"<<endl;
cin>>x;
cout<<"ingresa el numero para elevar"<<endl;
cin>>y;

r=superpower(x,y);
cout<< "el resultado es "<< r;
return 0;
}
