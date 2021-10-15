#ifndef GRAFO_H
#define GRAFO_H

#include "nodo.h"

#define SIZE 50

class Grafo {
private:
    Nodo arr[SIZE];
    int matriz[SIZE][SIZE];
    int posLastNode;

    int getIndex(std::string nombreNodo);

public:
    Grafo();

    void insertarNodo(std::string nombre, std::string estado, int magicoDesde, std::string clima, int temp, std::string atraccion);
    void insertarAdyacencia(std::string origen, std::string destino, int valor);
    void imprimir();
};

#endif // GRAFO_H
