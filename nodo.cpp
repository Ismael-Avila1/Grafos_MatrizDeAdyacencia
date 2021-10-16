#include "nodo.h"

Nodo::Nodo() {}

void Nodo::imprimir() {
    std::cout << "\t-----------------------------------------------------------------------------------";
    std::cout << "\n\n\t\t\t" << nombre << std::endl;
    std::cout << "\tEsta ubicado en el estado de " << estado << std::endl;
    std::cout << "\tEs considerado un pueblo magico por la Secretaria de Turismo desde " << MagicoDesde << std::endl;
    std::cout << "\tTiene un clima mayormente " << tipoClima << std::endl;
    std::cout << "\tLa temperatura media es de " << tempMedia << " grados Centigrados" << std::endl;
    std::cout << "\tSu atraccion principal es " << atraccPrincipal << std::endl;
}
