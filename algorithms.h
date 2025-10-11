#ifndef ALGORITHMS_H
#define ALGORITHMS_H

//funciones auxiliares
void intercambio(int &a, int &b);
void imprimir(int arr[], int n);
//algoritmos de ordenamiento
void burbuja(int arr[], int n);
void seleccion(int arr[], int n);
void insersion(int arr[], int n);
void mergesort(int arr[], int inicio, int fin);
void merge(int arr[], int inicio, int medio, int fin);
void quicksort(int arr[], int inicio, int fin);
int particion(int arr[], int inicio, int fin);
//algoritmos de búsqueda
int busquedalineal(int arr[], int n, int valor);
int busquedaBinaria(int arr[], int n, int valor);
//algoritmos investigados


#endif 