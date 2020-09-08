#include <iostream>
#include <fstream>
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
void heapSort(int b[], int n)
{
  
   int valor,temp,a;

    for(int i=n; i>0; i--)
    {
        for(int j=1; j<=i; j++)
        {
            valor=b[j];
            a=j/2;
            while(a>0 && b[a]<valor)
            {
                b[j]=b[a];
                j=a;
                a=a/2;
            }
            b[j]=valor;
        }
        temp=b[1];
        b[1]=b[i];
        b[i]=temp;
    }
}
