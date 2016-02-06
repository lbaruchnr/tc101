#include <iostream>
using namespace std;

void stars(int a){
cout<<'*';

}

int main()
{
  int n;
cout<<"ingrese el numero de estrellas que quiere"<<endl;
cin>>n;
for(int t=1; t<=n;t++)
{
stars(n);
}


return 0;
}
