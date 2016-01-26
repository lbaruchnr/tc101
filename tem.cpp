#include <iostream>
using namespace std;

int main ()
{
int tem, cels;
cout<<"introdusca la temperatura en F"<<endl;
cin>> tem;
cels = 5*(tem-32)/9;
cout<<"la temperatura en C es "<< cels<<endl;

if(cels>=100)
  cout<<"el agua hierve a esta temperatura"<< endl;
  else
  cout<<"el agua no hierve a esta temperatura"<< endl;

return 0;
}
