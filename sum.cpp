#include <iostream>

using namespace std;

int main()
{
int a, b, con, sum;

cout<<"ingresa el numero de inicio"<<endl;
cin>>a;
cout<<"ingresa el numero final"<<endl;
cin>>b;
con=a;
sum=a;
do
{
  con++;
  sum = sum + con;
} while(con!=b);

cout<<"la suma es "<<sum;

return 0;
}
