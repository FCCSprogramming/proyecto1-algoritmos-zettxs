#include "algorithms.h"
#include <iostream>
using namespace std;

//Intercambio
//IDEA: intercambia los valores de dos variables
//se usa en los algoritmos de ordenamiento
//para realizar los cambios de posición entre elementos del arreglo.
void intercambio(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

//Burbuja
// IDEA: comparar pares de elementos adyacentes
// si estan en el orden incorrecto, intercambiarlos
void burbuja(int arr[], int n)
{
    for(int i = 0; i < n - 1; ++i)
    {
        for(int j = 0; j < n - 1 - i; ++j)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

//Seleccion
//IDEA: busca el elemento más pequeño en la parte no ordenada 
//del arreglo y lo coloca en la posición correspondiente
void seleccion(int arr[], int n)
{
    for(int i = 0; i < n - 1; ++i)
    {
        int indMin = i;
        for(int j = i + 1; j < n; ++j)
        {
            if(arr[j] < arr[indMin])
            {
                indMin = j;
            }
        }
        swap(arr[i], arr[indMin]);
    }
}

//Insercion
//IDEA: toma cada elemento del arreglo y lo inserta en la
//posición correcta dentro de la parte ya ordenada.
void insercion(int arr[], int n)
{
    for(int i = 1; i < n ; ++i)
    {
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j] > temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}

//Merge
//IDEA: función auxiliar utilizada por mergesort()
//combina dos subarreglos ordenados en uno solo de forma ordenada.
void merge(int arr[], int inicio, int medio, int fin) 
{
    int n1 = medio - inicio + 1;
    int n2 = fin - medio;

    int L[100], R[100];

    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[inicio + i];
    }
    for (int j = 0; j < n2; j++)
    {
        R[j] = arr[medio + 1 + j];
    }

    int i = 0, j = 0, k = inicio;

    while (i < n1 && j < n2) 
    {
        if (L[i] <= R[j]) 
        {
            arr[k] = L[i];
            i++;
        } else 
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) 
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) 
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

//Merge Sort
//IDEA: usa el método “divide y vencerás”
//divide el arreglo en mitades recursivamente, las ordena y luego las combina
//en un solo arreglo ordenado mediante la función merge()
void mergesort(int arr[], int inicio, int fin) 
{
    if (inicio < fin) {
        int medio = (inicio + fin) / 2;
        mergesort(arr, inicio, medio);
        mergesort(arr, medio + 1, fin);
        merge(arr, inicio, medio, fin);
    }
}

//Particion
//IDEA: reorganiza los elementos del arreglo de modo que todos los menores
//que el pivote queden a la izquierda y los mayores a la derecha.
int particion(int arr[], int inicio, int fin) 
{
    int pivote = arr[fin];
    int i = inicio - 1;

    for (int j = inicio; j < fin; j++) 
    {
        if (arr[j] < pivote) 
        {
            i++;
            intercambio(arr[i], arr[j]);
        }
    }

    intercambio(arr[i + 1], arr[fin]);
    return i + 1;
}

//Quick Sort
//IDEA: usa el método “divide y vencerás”.
//selecciona un pivote, coloca los elementos menores a su izquierda
//y los mayores a su derecha, luego aplica el mismo proceso a las sublistas.
void quicksort(int arr[], int inicio, int fin)
{
    if (inicio < fin) 
    {
        int indicePivote = particion(arr, inicio, fin);
        quicksort(arr, inicio, indicePivote - 1);
        quicksort(arr, indicePivote + 1, fin);
    }
}
