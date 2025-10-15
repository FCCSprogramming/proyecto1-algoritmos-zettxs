#include "algorithms.h"
#include <iostream>
using namespace std;

//Imprimir
//IDEA: imprime los elementos de un arreglo
// mostra el contenido del arreglo después de aplicar
//un algoritmo de ordenamiento o búsqueda.
void imprimir(int arr[], int n)
{
    for (int i = 0; i < n; ++i) {
        cout << arr[i]<< " ";
    }
    cout << "\n";
}

//Busqueda Lineal
//IDEA: recorre el arreglo elemento por elemento hasta
//encontrar el valor buscado o llegar al final.
//devuelve la posición del valor si se encuentra o -1 si no lo encuentra
int busquedalineal(int arr[], int n, int valor)
{
    for(int i = 0; i < n; ++i)
    {
        if(valor == arr[i])
        {
            return i;
        }
    }
    return -1;
}

//Busqueda Binaria
//IDEA: divide el arreglo a la mitad repetidamente para determinar
//si el valor buscado está en la parte izquierda o derecha.
//devuelve la posición del valor si se encuentra o -1 si no lo encuentra
int busquedabinaria(int arr[], int n, int valor) 
{
    int inicio = 0;
    int fin = n - 1;

    while (inicio <= fin) 
    {
        int medio = (inicio + fin) / 2;

        if (arr[medio] == valor)
        {
            return medio;

        }
        else if (arr[medio] < valor)
        {
            inicio = medio + 1;
        }
        else
        {
            fin = medio - 1;
        }
    }

    return -1;
}