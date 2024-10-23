# Tarea de Estructuras Dinámicas de Datos: Listas Circulares en C++

## Descripción

Este repositorio contiene la implementación de plantillas (`templates`) para listas circulares simplemente y doblemente enlazadas en C++, como parte de una tarea de estructuras dinámicas de datos. Estas listas permiten almacenar y ordenar datos de personas (nombre y edad) utilizando `structs`. 

El código está dividido en dos archivos:
- `ListasCirculares.h`: Define las estructuras de las listas y el `struct Persona`.
- `main.cpp`: Prueba las funcionalidades básicas de las listas con diferentes datos.

## Estructura del Proyecto

- **ListasCirculares.h**: Este archivo contiene las implementaciones de las listas circulares simplemente y doblemente enlazadas. También define el `struct Persona` y las sobrecargas de operadores necesarias para comparar personas por edad.
  
- **main.cpp**: El archivo principal que contiene pruebas para verificar el comportamiento de las listas. Se insertan personas de forma desordenada y ordenada, y se imprimen las listas.

## Funcionalidades

### `struct Persona`
- **Campos**: 
  - `string nombre`
  - `int edad`
  
- **Sobrecarga de operadores**:
  - `<` y `>`: Compara personas por su edad.
  - `<<`: Imprime los datos de la persona en formato "Nombre (Edad)".

### Plantillas para Listas Circulares
- **CircularSinglyLinkedList**:
  - Inserción al final (`insertEnd`)
  - Inserción ordenada (`insertSorted`)
  - Impresión de la lista (`printList`)
  
- **CircularDoublyLinkedList**:
  - Inserción al final (`insertEnd`)
  - Inserción ordenada (`insertSorted`)
  - Impresión de la lista (`printList`)
