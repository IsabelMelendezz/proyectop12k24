#include "Maestros.h"
#include "bitacora.h"
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include "usuarios.h"

using namespace std;

void Maestros::menu()
{
    int choice;
	char x;

	do
    {
	system("cls");

	cout<<"\t\t\t------------------------------------------------------"<<endl;
	cout<<"\t\t\t|  SISTEMA GESTION- CRUD DE MAESTROS                 |"<<endl;
	cout<<"\t\t\t------------------------------------------------------"<<endl;
	cout<<"\t\t\t 1. Crear"<<endl;
	cout<<"\t\t\t 3. Modificar"<<endl;
	cout<<"\t\t\t 4. Buscar"<<endl;
	cout<<"\t\t\t 5. Borrar"<<endl;
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

