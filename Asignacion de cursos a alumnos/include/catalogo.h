#ifndef CATALOGO_H
#define CATALOGO_H
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>

using namespace std;

class catalogo
{
    public:
        catalogo(string id, string idP, string curso, string curso2, string jornada, string modalidad, string nombre);

        string setId(string id);
        string getId();

        string setIdp(string idP);
        string getIdp();

        string setNombre(string nombre);
        string getNombre();

        string setCurso(string curso);
        string getCurso();

        string setCurso2(string curso2);
        string getCurso2();

        string setJornada(string jornada);
        string getJornada();

        string setModalidad(string modalidad);
        string getModalidad();
//metodos

        void menuPrincipal();
        void submenu();
        void insertar();
        void consultar();
        void desplegar();
		void modificar();
		void buscar();
		void borrar();
		void catalogoCursos(string CursosD);

    protected:

    private:
    string id,curso,jornada,modalidad,idP, nombre, curso2;
};
#endif // catalogo.h
