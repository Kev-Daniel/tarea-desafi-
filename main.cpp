#include <iostream>
#include <fstream>
using namespace std ;
void arre (int arreglo[100],int A );
 
 
int main() {
 int A,B ;
 int arreglo[100] ;
 arre(arreglo,A);
 
  
}
void arre (int arreglo[100],int A){
  ofstream ordenamiento ;
  ordenamiento.open("archivo.txt") ; 
 int B=0;
  cout << "Ingrese el tamanio del arreglo ";
  cin >> A;
  for (int i = 0 ; i<A; i++){
    cout << "Ingrese elemeto del arreglo"<<"["<<i<<"]\n";
    cin >> arreglo[i];
  }
  //Ordenamiento 
  ordenamiento << "ARREGLO ORIGINAL: " ;
  for (int k =0; k<A; k++){
    ordenamiento << arreglo[k]<<" " ;
  }
  ordenamiento << endl ;
  for (int j = 0 ; j < A ; j++){
B = B + arreglo[j];
}
ordenamiento<< "LA SUMA DEL ARREGLO ES : " << B <<endl;
for (int i = 0;i<A;i++){
  int pos,axi;
  pos= i ;
  axi = arreglo [i];
  while((pos>0)&& (arreglo[pos-1]>axi))
  {
    arreglo [pos] = arreglo [pos -1];
    pos -- ;

  }
  arreglo[pos] = axi ;
}
ordenamiento<< " ARREGLO ORDENADO ";
  for (int z = 0 ; z < A ;z ++){
    ordenamiento << arreglo [z] <<" ";
  }



ordenamiento.close();
}
