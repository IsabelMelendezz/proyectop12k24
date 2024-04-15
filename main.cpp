#include <iostream>
#include<fstream>
#include "usuarios.h"
#include "Alumno.h"
#include "Maestros.h"
#include "Cursos.h"
#include "Jornadas.h"
#include "Facultades.h"
#include "Gestion financiera.h"
#include "bitacora.h"
#include "aplicaciones.h"
#include "notas.h"
#include "AsignacionAlumnos.h"
#include "AsignacionFacultades.h"
#include "AsignacionMaestros.h"

using namespace std;
void creditosModulo();
void catalogos();
void reportes();
void procesos();
void gestionU();
void menuGeneral();
void ayuda();
usuarios usuarioRegistrado;
int main()
{
  bool accesoUsuarios;
    //creditosModulo();

    accesoUsuarios=usuarioRegistrado.loginUsuarios();
    if (accesoUsuarios){
        menuGeneral();
    }
    system("cls");
    cout<<"** Hasta la proxima **";
    return 0;
}
void menuGeneral(){
    system("cls");
    int choice;
	//char x;

	do
    {
	system("cls");
	cout<<"\t\t\t\t\tUsuario: "<< usuarioRegistrado.getNombre() <<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t|   SISTEMA DE GESTION UMG     |"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t 1. Catalogos"<<endl;
	cout<<"\t\t\t 2. Procesos"<<endl;
	cout<<"\t\t\t 3. Reportes"<<endl;
	cout<<"\t\t\t 4. Ayuda"<<endl;
    cout<<"\t\t\t 5. Gestion de usuarios"<<endl;
	cout<<"\t\t\t 6. Salir del Sistema"<<endl;
    cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t|Opcion a escoger:[1/2/3/4/5/6]  |"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
        catalogos();
		break;
	case 2:
		procesos();
		break;
	case 3:
		reportes();
		break;
	case 4:{
		ayuda();
	}
		break;
	case 5:{
            gestionU();}
    	break;
    case 6:
    	break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		cin.get();
	}
    }while(choice!= 6);
}
void catalogos(){
    Alumno alumno;
    Maestros maestro;
    Facultades facu;
    Cursos cursos;
    Jornadas jor;
    int choice;
    //int x;
    do {
	system("cls");
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\t|   SISTEMA DE GESTION UMG - REGISTROS      |"<<endl;
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\t 1. Alumnos"<<endl;
	cout<<"\t\t\t 2. Maestros"<<endl;
	cout<<"\t\t\t 3. Facultades"<<endl;
	cout<<"\t\t\t 4. Cursos"<<endl;
	cout<<"\t\t\t 5. Jornadas"<<endl;
	cout<<"\t\t\t 6. Retornar menu anterior"<<endl;
    cout<<"\t\t\t --------------------------------------------"<<endl;
	cout<<"\t\t\t |   Opcion a escoger:[1|2|3|4|5|6]               |"<<endl;
	cout<<"\t\t\t --------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
    	 alumno.menu();
		break;
	case 2:
		//display();
		maestro.menu();
		break;
	case 3:
        facu.menu();
		break;
	case 4:
        cursos.menu();
		break;
    case 5:
        jor.menu();
		break;

	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		cin.get();
	}
    }while(choice!= 6);
}
void procesos(){
    int choice;
    AsignacionAlumnos asAlumnos;
    AsignacionMaestros asMaestros;
    AsignacionFacultades asFacu;
    notas nota;
    //int x;
    do {
	system("cls");
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\t|      SISTEMA GESTION UMG - Procesos       |"<<endl;
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\t 1. Asignacion de Cursos a Alumnos"<<endl;
	cout<<"\t\t\t 2. Asignacion de Cursos a maestros"<<endl;
	cout<<"\t\t\t 3. Asignacion de Cursos a facultades"<<endl;
	cout<<"\t\t\t 4. Gestion de notas"<<endl;
	cout<<"\t\t\t 5. Tesorería"<<endl;
	cout<<"\t\t\t 6. Retornar menu anterior"<<endl;
    cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4]"<<endl;
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:{
        asAlumnos.menu();

    }
		break;
	case 2:
		//display();
		{
		  asMaestros.menu();

		}
		break;
    case 3:
		//display();
		{
		    asFacu.menu();

		}
		break;
    case 4:
		//display();
		{
		    nota.menu();

		}
		break;
	case 5:
	    {
	        //modify();
		GestionFinanciera gestionF;
		gestionF.menu();
	    }

		break;
	case 6:
		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		cin.get();
	}
    }while(choice!= 6);
}
void reportes(){
    int choice;
    //int x;
    do {
	system("cls");
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\t |   SISTEMA GESTION UMG -  REPORTES        |"<<endl;
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\t 1. Certificaciones                         "<<endl;
	cout<<"\t\t\t 2. Estado de cuenta                        "<<endl;
	cout<<"\t\t\t 3. Retornar menu anterior"<<endl;
    cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5/6]"<<endl;
	cout<<"\t\t\t--------------------------------------------"<<endl;
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
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		cin.get();
	}
    }while(choice!= 3);
}

void gestionU(){
    int choice;
    //int x;
    do {
	system("cls");
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\t| SISTEMA GESTION DE UMG - Gestion Usuarios |"<<endl;
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\t 1. Autenticacion de usuarios"<<endl;
	cout<<"\t\t\t 2. Administracion del usuario"<<endl;
	cout<<"\t\t\t 3. Ver la bitacora de usuarios"<<endl;
	cout<<"\t\t\t 4. Retornar menu anterior"<<endl;
    cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\t|        Opcion a escoger:[1/2/3/4/5/6]     |"     <<endl;
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
        {
            usuarios users;
            users.loginUsuarios();
        }

		break;
	case 2:
	    {
            usuarios users2;
            users2.menuUsuarios();
	    }

		break;
	case 3:
	    {
        bitacora bitac;
		 bitac.menu();
	    }

		break;
    case 4:
        break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		cin.get();
	}
    }while(choice!= 4);
}

void ayuda(){
    int choice;
    //int x;
    do {
	system("cls");
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\t|      SISTEMA GESTION UMG - AYUDA          |"<<endl;
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\t 1. Instrucciones de uso para el usuario    "<<endl;
	cout<<"\t\t\t 2. Regresar al menu principal              "<<endl;
    cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\t|         Opcion a escoger:[1/2]        |"<<endl;
	cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
		break;

    default:
        cout<<"Opcion no valida, intente de nuevo"<<endl;
    }
		}while(choice!= 2);
}

