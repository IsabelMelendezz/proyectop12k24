#include "aplicaciones.h"
#include "bitacora.h"
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include "usuarios.h"

using namespace std;


void aplicaciones::menu()
{
    int choice;
	char x;

	do
    {
	system("cls");

	cout<<"\t\t\t -----------------------------------------------"<<endl;
	cout<<"\t\t\t |SISTEMA UMG - ASIGNACION DE CURSOS A MAESTROS |"<<endl;
	cout<<"\t\t\t -----------------------------------------------"<<endl;
	cout<<"\t\t\t 1. Ingreso de codigo para autenticacion y asignacion"<<endl;
	cout<<"\t\t\t 2. Despliegue Cursos"<<endl;
	cout<<"\t\t\t 3. Modificar Cursos"<<endl;
	cout<<"\t\t\t 4. Buscar horarios y sedes"<<endl;
	cout<<"\t\t\t 5. Borrar cursos"<<endl;
	cout<<"\t\t\t 6. Exit"<<endl;

	cout<<"\t\t\t -------------------------------"<<endl;
	cout<<"\t\t\t|Opcion a escoger:[1/2/3/4/5/6] |"<<endl;
	cout<<"\t\t\t -------------------------------"<<endl;
    cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
        {

        }

		break;
	case 2:
		//desplegar();
		break;
	case 3:
		//modificar();
		break;
	case 4:
		//buscar();
		break;
	case 5:
		//borrar();
		break;
	case 6:
		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		cin.get();
	}
  }while(choice!= 6);
}
