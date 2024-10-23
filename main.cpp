// main.cpp
#include "ListasCirculares.h"

int main() {
    // Crear personas
    Persona p1("Erwe", 25);
    Persona p2("Von", 20);
    Persona p3("Esse", 30);
    Persona p4("Maria", 22);
    
    // Probar lista circular simplemente enlazada con personas
    CircularSinglyLinkedList<Persona> listaSimple;
    
    // Insertar datos desordenados
    listaSimple.insertEnd(p1);
    listaSimple.insertEnd(p2);
    listaSimple.insertEnd(p3);
    
    cout << "Lista circular simplemente enlazada desordenada:" << endl;
    listaSimple.printList();
    
    // Insertar datos ordenados por edad
    CircularSinglyLinkedList<Persona> listaSimpleOrdenada;
    listaSimpleOrdenada.insertSorted(p1);
    listaSimpleOrdenada.insertSorted(p2);
    listaSimpleOrdenada.insertSorted(p3);
    listaSimpleOrdenada.insertSorted(p4);
    
    cout << "Lista circular simplemente enlazada ordenada por edad:" << endl;
    listaSimpleOrdenada.printList();
    
    // Probar lista circular doblemente enlazada con personas
    CircularDoublyLinkedList<Persona> listaDoble;
    
    // Insertar datos desordenados
    listaDoble.insertEnd(p1);
    listaDoble.insertEnd(p2);
    listaDoble.insertEnd(p3);
    
    cout << "Lista circular doblemente enlazada desordenada:" << endl;
    listaDoble.printList();
    
    // Insertar datos ordenados por edad
    CircularDoublyLinkedList<Persona> listaDobleOrdenada;
    listaDobleOrdenada.insertSorted(p1);
    listaDobleOrdenada.insertSorted(p2);
    listaDobleOrdenada.insertSorted(p3);
    listaDobleOrdenada.insertSorted(p4);
    
    cout << "Lista circular doblemente enlazada ordenada por edad:" << endl;
    listaDobleOrdenada.printList();
    
    return 0;
}
