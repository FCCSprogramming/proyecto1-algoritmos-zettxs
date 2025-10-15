#include <iostream>
#include "algorithms.h"
using namespace std;

int main()
{


    int desor = 6, dup = 8;


    cout << "--------PRUEBAS DE ORDENAMIENTO---------\n";

    // Burbuja
    int a1[] = {5, 2, 9, 1, 5, 6};

    cout << "Burbuja:\nArreglo original: " << endl;

    imprimir(a1, desor);
    burbuja(a1, desor);

    cout << "Ordenado: ";
    imprimir(a1, desor);

    cout << "\n";

    // Selección
    int a2[] = {5, 2, 9, 1, 5, 6};
    
    cout << "Seleccion:\nArreglo original: " << endl;

    imprimir(a2, desor);
    seleccion(a2, desor);

    cout << "Ordenado: ";
    imprimir(a2, desor);

    cout << "\n";

    // Inserción
    int a3[] = {3, 1, 4, 1, 5, 9, 3, 1};

    cout << "Insercion:\nArreglo original: " << endl;

    imprimir(a3, dup);
    insercion(a3, dup);

    cout << "Ordenado: ";
    imprimir(a3, dup);

    cout << "\n";

    // MergeSort
    int a4[] = {5, 2, 9, 1, 5, 6};

    cout << "Merge Sort:\nArreglo original: " << endl;

    imprimir(a4, desor);
    mergesort(a4, 0, desor - 1);

    cout << "Ordenado: ";
    imprimir(a4, desor);
    
    cout << "\n";

    // QuickSort
    int a5[] = {3, 1, 4, 1, 5, 9, 3, 1};

    cout << "Quick Sort:\nArreglo original: " << endl;

    imprimir(a5, dup);
    quicksort(a5, 0, dup - 1);

    cout << "Ordenado: ";
    imprimir(a5, dup);

    cout << "\n";

    cout << "--------PRUEBAS DE BUSQUEDA--------\n";

    int arrBusqueda[] = {1, 2, 3, 4, 5, 6, 7};
    int nB = 7;
    int valor1 = 3, valor2 = 10;

    cout << "Arreglo para busqueda: " ;
    imprimir(arrBusqueda, nB);
    cout << "\n";

    // Búsqueda lineal
    cout << "Busqueda Lineal de " << valor1 << ": " << endl;

    int pos = busquedalineal(arrBusqueda, nB, valor1);

    if (pos != -1)
    {
        cout << "Encontrado en la posicion " << pos << "\n";
    }
    else
    {
        cout << "No encontrado\n";
    }

    cout << "Busqueda Lineal de " << valor2 << ": ";

    pos = busquedalineal(arrBusqueda, nB, valor2);

    if (pos != -1)
    {
        cout << "Encontrado en la posicion " << pos << "\n";
    }
    else
    {
        cout << "No encontrado\n";
    }
    cout << "\n";

    // Búsqueda binaria
    cout << "Busqueda Binaria de " << valor1 << ": " << endl;

    pos = busquedabinaria(arrBusqueda, nB, valor1);

    if (pos != -1)
    {
        cout << "Encontrado en la posicion " << pos << "\n";
    }
    else
    {
        cout << "No encontrado\n";
    }

    cout << "Busqueda Binaria de " << valor2 << ": ";

    pos = busquedabinaria(arrBusqueda, nB, valor2);

    if (pos != -1)
    {
        cout << "Encontrado en la posicion " << pos << "\n";
    }
    else
    {
        cout << "No encontrado\n";
    }

    cout << "\nFIN DE PRUEBAS :D\n";
    return 0;
}
