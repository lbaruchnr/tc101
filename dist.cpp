#include <iostream>
#include <cmath>
using namespace std;

float distance(float x1, float x2, float y1, float y2)
{
float t;
t= sqrt((((x2-x1)*(x2-x1)))+(((y2-y1)*(y2-y1))));

return (t);
}

int main()
{
float a, b, c, d,T;
cout<< "ingrese las cuatro cordenadas x1,x2,y1,y2"<< endl;
cin>>a;
cin>>b;
cin>>c;
cin>>d;
T=distance(a, b, c, d);
cout<< "la distancia entre los puntos es "<<T;

return 0;
}
