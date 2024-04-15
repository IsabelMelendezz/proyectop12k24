#include "Gestion financiera.h"
#include "bitacora.h"
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include "usuarios.h"
#include "aplicaciones.h"

using namespace std;


void GestionFinanciera::menu()
{
    int choice;
	char x;

	do
    {
	system("cls");

	cout<<"\t\t\t -----------------------------------------------"<<endl;
	cout<<"\t\t\t |           SISTEMA UMG - TESORERIA           |"<<endl;
	cout<<"\t\t\t -----------------------------------------------"<<endl;
	cout<<"\t\t\t 1. Pagos (Alumnos)"<<endl;
	cout<<"\t\t\t 2. Pago Honorarios (Maestros)"<<endl;
    cout<<"\t\t\t 3. Salir de este menu "<<endl;
	cout<<"\t\t\t -------------------------------"<<endl;
	cout<<"\t\t\t|Opcion a escoger:[1|2|3|4|5|6] |"<<endl;
	cout<<"\t\t\t -------------------------------"<<endl<<endl;
    cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:

		break;
	case 2:
        break;

	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		cin.get();
	}
  }while(choice!=3);
}
