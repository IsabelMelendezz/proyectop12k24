#ifndef GESTION_FINANCIERA_H
#define GESTION_FINANCIERA_H

#include <iostream>
#include <string>

class GestionFinanciera
{
private:
    std::string id, nombre, telefono;

public:
    void menu();
    void insertar();
    void desplegar();
    void modificar();
    void buscar();
    void borrar();
};

#endif // GESTION_FINANCIERA_H
