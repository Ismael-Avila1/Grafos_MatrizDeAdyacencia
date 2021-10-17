#include "grafo.h"

Grafo::Grafo() {
    posLastNode = -1;

    for (int i=0; i<SIZE; i++)
        for(int j=0; j<SIZE; j++)
            matriz[i][j] = 0;
}

int Grafo::getIndex(std::string nombreNodo) {
    for(int i=0; i<=posLastNode; i++)
        if(arr[i].nombre == nombreNodo)
            return i;
    return -1;
}

void Grafo::insertarNodo(std::string nombre, std::string estado, int magicoDesde, std::string clima, int temp, std::string atraccion) {
    if(posLastNode == -1)
        posLastNode = 0;

    arr[posLastNode].nombre = nombre;
    arr[posLastNode].estado = estado;
    arr[posLastNode].MagicoDesde = magicoDesde;
    arr[posLastNode].tipoClima = clima;
    arr[posLastNode].tempMedia = temp;
    arr[posLastNode].atraccPrincipal = atraccion;

    posLastNode++;
}

void Grafo::insertarAdyacencia(std::string origen, std::string destino, int valor) {
    int indiceOrigen = getIndex(origen);
    int indiceDestino = getIndex(destino);

    if(indiceOrigen < 0 and indiceDestino < 0) {
        std::cout << "Posiciones incorrectas" << std::endl;
        return;
    }

    matriz[indiceOrigen][indiceDestino] = valor;
    matriz[indiceDestino][indiceOrigen] = valor;
}

void Grafo::imprimir() {

    if(posLastNode == -1) {
        std::cout << std::endl << "Grafo Vacio" << std::endl;
        return;
    }

    for(int i=0; i<posLastNode; i++) {
        arr[i].imprimir();

        std::cout << std::endl << "\tDe " << arr[i].nombre << " puedes ir a ... " << std::endl << std::endl;

        for(int j=0; j<posLastNode; j++)
            if(matriz[i][j] != 0)
                std::cout << "\t\t" << arr[j].nombre << ". Que esta a una distancia de " << matriz[i][j] << "km" << std::endl;
    }
}
