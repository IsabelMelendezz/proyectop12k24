#ifndef NOTAS_H
#define NOTAS_H

#include <iostream>
#include <fstream>

class notas
{
private:
    std::string carnet, curso, calificacion;

public:
    void menu();
    void insertar();
    void mostrar();
    void modificar();
    void buscar();
    void borrar();
};

#endif // NOTAS_H
