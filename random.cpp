#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ()
{
int num, random, intentos;
 srand(time(0));
 random = (rand()%100)+1;
cout << "elije un numero entre el 1 y el 100 "<<endl;
cin >> num;
for(intentos=1; num!=random; intentos++)
{
 if(num!=random)
 {
   if(num>random)
   cout<<"el numero es mas alto vuelve a intentarlo"<<endl;
   if(num<random)
   cout<<"el numero es mas bajo vuelve a intentarlo."<<endl;
   cin>>num;
 }
}
if(num==random)
{
 cout<<"felicidades ese es el numero premiado"<<endl;
 cout<<"hiciste "<<intentos<<" intentos"<<endl;
}
return 0;
}
