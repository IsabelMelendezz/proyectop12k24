#include <iostream>
#include "usuario.h"
#include "catalogo.h"


using namespace std;

int main()
{
    //variables de user y contraseñan
    string user,contrasena;
    //llmamos al objeto e ingresamos los parametros
    usuario ingreso(user,contrasena);

     string id, idP,nombre,curso,curso2, jornada, modalidad;
        catalogo menup (id, idP,nombre,curso, curso2,jornada, modalidad);




    //creamos un bool  que verifique y despliegue el metodo verificarUsuario
    bool UsuarioCorrecto=ingreso.VerificarUsuario();


    //luego de ingresar con usuario y contraseña se nos desplega otro menu
    if(UsuarioCorrecto)
    {
        int opcion;
        char  x;
        do
        {
        	system("cls");

    cout <<"\t\t\t--------------------------------------------"<<endl;
    cout <<"\t\t\t|                                           |"<<endl;
    cout <<"\t\t\t|  UNIVERSIDAD MARIANO GALVEZ DE GUATEMALA  |"<<endl;
    cout <<"\t\t\t|      Asignacion de cursos a alumnos       | "<<endl;
    cout <<"\t\t\t|                Bienvenido                 |"<<endl;
    cout <<"\t\t\t|                                           |"<<endl;
    cout <<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\t 1. Menu de Usuarios"<<endl;
	cout<<"\t\t\t 2. Asignacion de cursos"<<endl;
    cout<<"\t\t\t 3. Visualizar notas"<<endl;
	cout<<"\t\t\t 4. Salir del Menu"<<endl;

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t| Opcion a escoger:[1/2/3/4]    |"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"Ingresa tu Opcion: ";
    cin>>opcion;
    switch(opcion){
    case 1:
        ingreso.MenuUser();//ingresa al menu de usuarios
        break;
    case 2:
        //ingresa el submenu del catalogos
        menup.submenu();
        break;
    case 3:
        //consulta.desplegar();
        break;
    case 4:
        break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
        break;}
        }while(opcion!= 4);

    }
    return 0;
}
