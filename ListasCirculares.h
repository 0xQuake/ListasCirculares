// ListasCirculares.h
#ifndef LISTAS_CIRCULARES_H
#define LISTAS_CIRCULARES_H

#include <iostream>
#include <string>
using namespace std;

// Definición del struct Persona
struct Persona {
    string nombre;
    int edad;
    
    // Constructor para inicializar persona
    Persona(string n = "", int e = 0) : nombre(n), edad(e) {}
    
    // Sobrecarga del operador < para comparar por edad
    bool operator<(const Persona& otra) const {
        return edad < otra.edad;
    }
    
    // Sobrecarga del operador > para comparar por edad
    bool operator>(const Persona& otra) const {
        return edad > otra.edad;
    }

    // Sobrecarga del operador << para imprimir persona
    friend ostream& operator<<(ostream& os, const Persona& persona) {
        os << persona.nombre << " (" << persona.edad << ")";
        return os;
    }
};

// Lista Circular Simplemente Enlazada
template <typename T>
class CircularSinglyLinkedList {
    struct Node {
        T data;
        Node* next;
        Node(T val) : data(val), next(nullptr) {}
    };
    
    Node* tail;
    
public:
    CircularSinglyLinkedList() : tail(nullptr) {}
    
    void insertEnd(T data);
    void printList();
    void insertSorted(T data);
};

// Funciones de Lista Circular Simple
template <typename T>
void CircularSinglyLinkedList<T>::insertEnd(T data) {
    Node* newNode = new Node(data);
    if (tail == nullptr) {
        tail = newNode;
        tail->next = tail;
    } else {
        newNode->next = tail->next;
        tail->next = newNode;
        tail = newNode;
    }
}

template <typename T>
void CircularSinglyLinkedList<T>::printList() {
    if (tail == nullptr) {
        cout << "La lista está vacía" << endl;
        return;
    }
    Node* current = tail->next;
    do {
        cout << current->data << " ";
        current = current->next;
    } while (current != tail->next);
    cout << endl;
}

template <typename T>
void CircularSinglyLinkedList<T>::insertSorted(T data) {
    Node* newNode = new Node(data);
    if (tail == nullptr) {
        tail = newNode;
        tail->next = tail;
    } else if (data < tail->next->data) {
        newNode->next = tail->next;
        tail->next = newNode;
    } else if (data > tail->data) {
        newNode->next = tail->next;
        tail->next = newNode;
        tail = newNode;
    } else {
        Node* current = tail->next;
        while (current->next != tail->next && current->next->data < data) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

// Lista Circular Doblemente Enlazada
template <typename T>
class CircularDoublyLinkedList {
    struct Node {
        T data;
        Node* next;
        Node* prev;
        Node(T val) : data(val), next(nullptr), prev(nullptr) {}
    };
    
    Node* tail;
    
public:
    CircularDoublyLinkedList() : tail(nullptr) {}
    
    void insertEnd(T data);
    void printList();
    void insertSorted(T data);
};

// Funciones de Lista Circular Doble
template <typename T>
void CircularDoublyLinkedList<T>::insertEnd(T data) {
    Node* newNode = new Node(data);
    if (tail == nullptr) {
        tail = newNode;
        tail->next = tail;
        tail->prev = tail;
    } else {
        newNode->next = tail->next;
        newNode->prev = tail;
        tail->next->prev = newNode;
        tail->next = newNode;
        tail = newNode;
    }
}

template <typename T>
void CircularDoublyLinkedList<T>::printList() {
    if (tail == nullptr) {
        cout << "La lista está vacía" << endl;
        return;
    }
    Node* current = tail->next;
    do {
        cout << current->data << " ";
        current = current->next;
    } while (current != tail->next);
    cout << endl;
}

template <typename T>
void CircularDoublyLinkedList<T>::insertSorted(T data) {
    Node* newNode = new Node(data);
    if (tail == nullptr) {
        tail = newNode;
        tail->next = tail;
        tail->prev = tail;
    } else if (data < tail->next->data) {
        newNode->next = tail->next;
        newNode->prev = tail;
        tail->next->prev = newNode;
        tail->next = newNode;
    } else if (data > tail->data) {
        newNode->next = tail->next;
        newNode->prev = tail;
        tail->next->prev = newNode;
        tail->next = newNode;
        tail = newNode;
    } else {
        Node* current = tail->next;
        while (current->next != tail->next && current->next->data < data) {
            current = current->next;
        }
        newNode->next = current->next;
        newNode->prev = current;
        current->next->prev = newNode;
        current->next = newNode;
    }
}

#endif // LISTAS_CIRCULARES_H
