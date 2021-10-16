#include <iostream>
#include <conio.h>

#include "grafo.h"

using namespace std;

void capturarNodo(Grafo& g);
void capturarAdyacencia(Grafo& g);

int main() {

    Grafo g;

    int op;

    // Insertando noodos hardcodeados
    g.insertarNodo("Mazamitla", "Jalisco", 2005, "Semiseco y semi calido", 1, "Mundo Aventura Parque Ecologico");
    g.insertarNodo("Sayulita", "Nayarit", 2015, "Tropical", 25, "Campamento tortuguero Sayulita");
    g.insertarNodo("Isla Mujeres", "Quintana Roo", 2015, "Calido", 27, "Cabo Catoche");
    g.insertarNodo("Tepoztlan", "Morelos", 2010, "Nublado", 18, "Sitio arqueologico Tepozteco");
    g.insertarNodo("San Pedro Tlaquepaque", "Jalisco", 2018, "Semicalido", 20, "El Parian");

    g.insertarNodo("Tapalpa", "Jalisco", 2002, "Fresco", 16, "Las Pilas");
    g.insertarNodo("Casas Grandes", "Chihuahua", 2015, "Desertico", 17, "Zona Arqueologica Paquime");
    g.insertarNodo("Valle de Bravo", "Estado de Mexico", 2005, "Templado", 18, "Monte Alto");
    g.insertarNodo("Valladolid", "Yucatan", 2012, "Semi humedo", 25, "Cenote Yokzonot");
    g.insertarNodo("Bernal", "Queretaro", 2005, "Semiseco y seco", 18, "Cadereyta de Montes");

    g.insertarNodo("Real de Catorce", "San Luis Potosi", 2001, "Arido, templado", 18, "Tunel de Ogarrio");
    g.insertarNodo("Cholula", "Puebla", 2012, "Calido y templado", 17, "Piramide de Cholula");
    g.insertarNodo("Creel", "Chihuahua", 2007, "Seco", 24, "Barrancas del Cobre");
    g.insertarNodo("Mapimi", "Durango", 2012, "Fresco y seco", 26, "Sierra del Sarnoso");
    g.insertarNodo("Zacatlan", "Puebla", 2011, "Templado, subhumedo", 14, "Barranca de los Jilgueros");

    g.insertarNodo("Huasca de Ocampo", "Hidalgo", 2001, "Templado, semi frio", 15, "Bosque de las Truchas");
    g.insertarNodo("Mazunte", "Oaxaca", 2015, "Tropical", 27, "Iguanario de Barra del Potrero");
    g.insertarNodo("Patzcuaro", "Michoacan", 2002, "Calido y templado", 15, "Casa de los Once Patios");
    g.insertarNodo("Chiapa de Corzo", "Chiapas", 2012, "Calido, Subhumedo", 24, "Canion del Sumidero");
    g.insertarNodo("Tequila", "Jalisco", 2003, "Semiarido, Subtropical", 23, "Tren Jose Cuervo Express");

    g.insertarNodo("Palenque", "Chiapas", 2015, "Tropical, calido y humedo", 27, "Bonampak");

    // Insertando aristas hardcodeadas
    g.insertarAdyacencia("Casas Grandes", "Creel", 616);
    g.insertarAdyacencia("Casas Grandes", "Mapimi", 893);
    g.insertarAdyacencia("Creel", "Mapimi", 674);
    g.insertarAdyacencia("Mapimi", "Tequila", 834);
    g.insertarAdyacencia("Tequila", "San Pedro Tlaquepaque", 71);
    g.insertarAdyacencia("San Pedro Tlaquepaque", "Real de Catorce", 581);
    g.insertarAdyacencia("Real de Catorce", "Huasca de Ocampo", 692);
    g.insertarAdyacencia("Huasca de Ocampo", "Zacatlan", 90);
    g.insertarAdyacencia("Zacatlan", "Cholula", 132);
    g.insertarAdyacencia("Cholula", "Mazunte", 618);
    g.insertarAdyacencia("Mazunte", "Chiapa de Corzo", 544);
    g.insertarAdyacencia("Chiapa de Corzo", "Palenque", 263);
    g.insertarAdyacencia("Palenque", "Valladolid", 689);
    g.insertarAdyacencia("Valladolid", "Isla Mujeres", 177);
    g.insertarAdyacencia("Huasca de Ocampo", "Bernal", 231);
    g.insertarAdyacencia("Bernal", "Tepoztlan", 313);
    g.insertarAdyacencia("Tepoztlan", "Mazunte", 738);
    g.insertarAdyacencia("Bernal", "Patzcuaro", 297);
    g.insertarAdyacencia("Patzcuaro", "Valle de Bravo", 293);
    g.insertarAdyacencia("Valle de Bravo", "Mazamitla", 514);
    g.insertarAdyacencia("Mazamitla", "Tapalpa", 136);
    g.insertarAdyacencia("Mazamitla", "Sayulita", 396);
    g.insertarAdyacencia("Sayulita", "Tapalpa", 320);


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
