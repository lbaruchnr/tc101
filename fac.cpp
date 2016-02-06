#include <iostream>
using namespace std;

int main()
{
int a=1, n;
cout<<"ingrese un numero "<<endl;
cin>> n;
for(int c=1; c<=n; c++)
{
a=a*c;
}

cout<<"el valor factorial es "<< a;
return 0;
}
