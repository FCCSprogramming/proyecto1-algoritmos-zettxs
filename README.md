[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/HmYwWK_V)
# algoritmos-proyecto

# Implementación Modular de Algoritmos de Ordenamiento y Búsqueda

## Objetivo
Desarrollar un proyecto en C++ que implemente distintos algoritmos de ordenamiento y búsqueda de manera modular, utilizando buenas prácticas de organización del código. Se trabajará en dos fases.

---

## PARTE 1: Implementación Inicial

### Estructura de archivos

Crear un proyecto con los siguientes archivos:
```
📁 proyectoAlgoritmos/
├── main.cpp
├── algorithms.h
└── algorithms.cpp
```

### Descripción de cada archivo:

- **main.cpp**: Punto de entrada del programa. Aquí se probarán los algoritmos implementados.
- **algorithms.h**: Declaración (prototipos) de las funciones de búsqueda y ordenamiento.
- **algorithms.cpp**: Implementación de las funciones declaradas en el header (algorithms.h)

### Algoritmos requeridos en esta fase:

Implementar los algoritmos vistos en la segunda sesión:

#### Ordenamiento:
- Bubble Sort
- Selection Sort
- Insertion Sort

#### Búsqueda:
- Búsqueda Lineal

---

## PARTE 2: Ampliación y Mejora Modular

### Tareas

1. **Completar los demás algoritmos** vistos durante la tercera sesión. 

#### Ordenamiento
   - Merge Sort
   - Quick Sort

#### Búsqueda
   - Búsqueda Binaria

2. **Agregar al menos 2 algoritmos nuevos** investigados por ustedes. Ejemplos:
   - Heap Sort
   - Counting Sort
   - Jump Search
   - Interpolation Search
   - etc

3. **Mejorar la organización modular** del código:
   - Separar los algoritmos en múltiples archivos si es necesario (por ejemplo, `sorting.h/ sorting.cpp` y `searching.h/ searching.cpp`).
   - Agregar comentarios descriptivos.
   - Implementar funciones de utilidad, como:
     - Imprimir vectores
     - Medir tiempo de ejecución (pueden usar la biblioteca estándar <chrono> de C++)
     - Mostrar una tabla comparando los tiempos de ejecución de los algoritmos para diferentes tamaños (n = 1000, n = 5000, n = 10000)
   - Considere el uso de funciones genéricas mediante plantillas (templates). Aunque no es obligatorio, es una oportunidad para familiarizarse con la programación genérica en C++ y hacer el código más flexible y reutilizable (con ello pueden lograr que sus algoritmos trabajen con distintos tipos de datos) 
---

## Requisitos de Prueba

- Probar todos los algoritmos desde `main.cpp`.
- Utilizar ejemplos variados de datos (ordenados, desordenados, con duplicados, etc.).
- Comparar rendimiento básico entre algoritmos (tiempo, comparaciones, etc.).
---

##  Entregable

- Proyecto completo en una carpeta o repositorio.
- Archivo README.md con:
  - Breve descripción del proyecto.
  - Instrucciones para compilar y ejecutar.
  - Qué algoritmos fueron implementados y por quién.
  - Qué mejoras se realizaron en la segunda parte.

---

## Fecha de entrega

- **Parte 1, 2:** 12/10/25, 23:00
---

<!-- 
## Bonus
- Agregar una interfaz de consola para seleccionar el algoritmo a utilizar.
- Leer datos desde un archivo de texto.
- Visualizar el proceso de ordenamiento paso a paso (ideal para burbuja o inserción).

---
-->