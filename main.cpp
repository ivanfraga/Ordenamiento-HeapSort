#include <iostream>
#include <fstream>
#include "HeapSort.h"
using namespace std;
void heapSort (int b[],int n);
int main() {
 int arreglo[100],n;
 ofstream Drago;
 Drago.open("HeapSort.txt", ios::app);
 Drago << "\n\nOrdenamiento HeapSort\n\n";
 Drago << "El arreglo original es : \n";
 cout <<"INGRESE LA CANTIDAD DE VALORES ";
 cin>>n;
 for(int i=1;i<=n;i++)
    {
        cin>>arreglo[i];
        Drago << arreglo [i] <<" ";
    }
  Drago.close();

heapSort(arreglo,  n);
cout <<"El orden es:";
 
  Drago.open("HeapSort.txt", ios::app);
  Drago << "\n\nEl arreglo ordenado es : \n";
 for(int i=1;i<=n;i++)
    {
        cout<<"["<<arreglo[i]<<"]";
        Drago <<"["<<arreglo[i]<<"]";
    }
  Drago.close();



return 0;

}

