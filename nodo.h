#ifndef NODO_H
#define NODO_H

#include <string>
#include <iostream>

class Nodo {
private:
    std::string nombre;
    std::string estado;
    int MagicoDesde;
    std::string tipoClima;
    int tempMedia;
    std::string atraccPrincipal;

    Nodo();

    void imprimir();

    friend class Grafo;
};

#endif // NODO_H
