#include <fstream>
#include <iostream>
#include <iostream>
using namespace std;

double lectura(string filename);

int main(){
      double x,y;
      x=lectura("valores_x.txt");
      y=lectura("valores_y.txt");
      cout<<"El valor de la suma de x es "<<x<<". y la de y es "<<y<<endl;
}



double lectura(string filename){
  double suma=0;
  ifstream infile; 
  string line;
  int numero=0; 

  infile.open(filename);   
  getline(infile, line);
  while(infile){
    suma+=atof(line.c_str());
    getline(infile, line);  
  }
    
  infile.close();
  return suma;
}