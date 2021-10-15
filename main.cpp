#include <iostream>
#include <conio.h>

#include "grafo.h"

using namespace std;

void capturarNodo(Grafo& g);
void capturarAdyacencia(Grafo& g);

int main() {

    Grafo g;

    int op;

    do {
        cout << "\n\t1. Insertar un nuevo Nodo" << endl;
        cout << "\t2. Insertar adyacencia" << endl;
        cout << "\t3. Imprimir Grafo" << endl;
        cout << "\t0. Salir" << endl;

        cout << "Ingresa una opcion: ";
        cin >> op;

        switch (op) {
        case 1:
            capturarNodo(g);
            cout << "\n\n\tPresiona <ENTER> para continuar..." << endl;
            getch();
            break;

        case 2:
            capturarAdyacencia(g);
            cout << "\n\n\tPresiona <ENTER> para continuar..." << endl;
            getch();
            break;

        case 3:
            g.imprimir();
            cout << "\n\n\tPresiona <ENTER> para continuar..." << endl;
            getch();
            break;

        case 0:
            cout << "\n\tFin del Programa." << endl;
            cout << "\tPresiona <ENTER> para continuar..." << endl;
            getch();
            break;

        default:
            system("cls");
            break;
        }

        system("cls");
    } while(op != 0);

    return 0;
}


void capturarNodo(Grafo& g) {
    string nombre, estado, clima, atraccion;
    int magicoDesde, temp;

    cout << endl << endl << "\t\tIngresa el nombre del Pueblo Magico: ";
    cin >> nombre;

    cout << endl << "\t\tIngresa el estado donde se encuentra: ";
    cin >> estado;

    cout << endl << "\t\tIngresa el anio desde que es Pueblo Magico: ";
    cin >> magicoDesde;

    cout << endl << "\t\tIngresa el tipo de clima que predomina: ";
    cin >> clima;

    cout << endl << "\t\tIngresa la temperatura promedio: ";
    cin >> temp;

    cout << endl << "\t\tIngresa la atraccion principal: ";
    cin >> atraccion;

    g.insertarNodo(nombre, estado, magicoDesde, clima, temp, atraccion);
}

void capturarAdyacencia(Grafo& g) {
    string origen, destino;
    int valor;

    cout << endl << endl <<"t\tIngresa el nombre del nodo de origen: ";
    cin >> origen;

    cout << endl <<"t\tIngresa el nombre del nodo de destino: ";
    cin >> destino;

    cout << endl <<"t\tIngresa la distancia entre origen y destino: ";
    cin >> valor;

    g.insertarAdyacencia(origen, destino, valor);
}
