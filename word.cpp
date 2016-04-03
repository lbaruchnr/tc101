#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int find_word(string pal, string tipo){
  string line;
  int cont=0;
  ifstream myfile(tipo.c_str());
  //string myfile(tipo);
  if (myfile.is_open())
  {
    while(getline(myfile,line)){
      if(line.compare(pal)==0){
        cont++;
      }
    }
    myfile.close();
  }
    else {
  cout<<"no se encontro o no se pudo habrir el archivo"<<endl;
  }
  cout<<"la palabra esta: "<<cont<<endl;
  return cont;
}

int main(){
  string pal, tipo, line;
  int count;
  cout<<"la palabra que busca"<<endl;
  cin>>pal;
  cout<<"ingresa el nombre y extecion o tipo de archivo que buscas"<<endl;
  cin>>tipo;
  find_word(pal, tipo);
return 0;
}
