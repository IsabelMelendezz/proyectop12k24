#include "AsignacionMaestros.h"
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include "usuarios.h"




using namespace std;


void AsignacionMaestros::menu()
{
    int choice;
	char x;

	do
    {
	system("cls");

	cout<<"\t\t\t------------------------------------------------------"<<endl;
	cout<<"\t\t\t|  SISTEMA GESTION- ASIGNACION MAESTRO/CURSO          |"<<endl;
	cout<<"\t\t\t------------------------------------------------------"<<endl;
	cout<<"\t\t\t 1. Nueva Asignacion"<<endl;
	cout<<"\t\t\t 3. Modificar Asignacion"<<endl;
	cout<<"\t\t\t 4. Buscar Asignaciones"<<endl;
	cout<<"\t\t\t 5. Desasignar"<<endl;
	cout<<"\t\t\t 6. Salir de este menu"<<endl;

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5/6]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
    cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:

		break;
	case 2:

		break;
	case 3:

		break;
	case 4:

		break;
	case 5:

		break;
	case 6:
		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		cin.get();
	}
  }while(choice!= 6);
}
