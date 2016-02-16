#include <iostream>
 using namespace std;

 int fibonacci(int x)
 {
 if(x==0)
 {return 0;}
 if(x==1)
{return 1;}
if(x==2)
{return 1;}
else
{return fibonacci(x-1)+fibonacci(x-2);}
}

 int main()
 {
   int x;

   cout<<"ingresa numero"<<endl;
   cin>>x;
   cout<<fibonacci(x);
   return 0;
 }
