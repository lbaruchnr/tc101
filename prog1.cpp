#include <iostream>

using namespace std;

int main ()
{
float radius, height, V;

cout<< "ingresa el radio"<<endl;
cin>>radius;
cout<< "ingrese la altura"<< endl;
cin>>height;

V=3.1416*(radius*radius)*height;

cout<<"V= "<<V;

return 0;
}
