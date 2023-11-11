//Declarando las bibliotecas a usar
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Funcion para crear numeros random
void funcion(int ab[], int a)
{
    for (int i = 0; i < a; i++)
    {
        cout<<ab[i]<<"  "<<endl;
    }
    
}
int main(){ 

    //Declarando variables
    const int a = 20;
    int arreglo[a], num, uno;

    srand(time(0)); //Haciendo los numeros aletatorios en cada compilacion
    for (int i = 0; i < a; i++)
    {
        arreglo[i] = 1 + rand() % 50;
    }
    
    cout<<"Ingrese el numero a comparar: "<<endl;cin>>num;
    if (num = arreglo[a])
    {
        cout<<"Su numero esta en el arreglo. "<<endl;
    }
    else
    {
        cout<<"Su numero no esta en el arreglo. "<<endl;
    }
    
    
    //Llamando a la funcion
    cout<<" Quiere ver el arreglo aleatorio?. "<<endl<<"1- Si.  2- No. ";cin>>uno;
    if (uno == 1)
    {
        funcion(arreglo,a);
    }
    else
    {
        cout<<"Saliendo. "<<endl;
    }
        

    system("pause");
    return 0;
}