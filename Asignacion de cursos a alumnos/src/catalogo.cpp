#include "catalogo.h"
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include <vector>

using namespace std;

catalogo::catalogo(string id, string idP, string nombre, string curso2, string curso, string jornada, string modalidad)
{
    this->id = id;
    this->curso=curso;
    this->jornada = jornada;
    this->modalidad=modalidad;
    this->idP = idP;
    this->nombre=nombre;
    this->curso2=curso2;
}

string catalogo::setId( string id)
{
    this-> id=id;
}

string catalogo::getCurso2()
{
    return this -> curso2;
}
string catalogo::setCurso2(string curso2)
{
    this->curso2=curso2;
}

string catalogo::getCurso()
{
    return this->curso;
}

string catalogo::setJornada(string jornada)
{
    this->jornada=jornada;
}

string catalogo::getJornada()
{
    return this->jornada;
}

string catalogo::setModalidad(string modalidad)
{
    this->modalidad=modalidad;
}

string catalogo::getModalidad()
{
    return this->modalidad;
}

string catalogo::setIdp(string idP)
{
    this->idP=idP;
}

string catalogo::getIdp()
{
    return this->idP;
}

string catalogo::setNombre(string nombre)
{
    this->nombre=nombre;
}

string catalogo::getNombre()
{
    return this->nombre;
}

void catalogo::submenu()
{
int opcion;
    char x;
    bool repetir=true;
    system("cls");
   do
   {

    cout<<"\t\t\t--------------------------------------------"<<endl;
    cout<<"\t\t\t|  CRUD ASIGNACION DE CURSOS A ALUMNOS      |"<<endl;
    cout<<"\t\t\t--------------------------------------------"<<endl;
	cout<<"\t\t\t 1. Ingresar Detalles de la asignacion"<<endl;
	cout<<"\t\t\t 2. Modificar detalles elegidos"<<endl;
	cout<<"\t\t\t 3. Consultar el registro de cursos "<<endl;
	cout<<"\t\t\t 4. Borrar cambios realizados"<<endl;
	cout<<"\t\t\t 5. Salir del menu "<<endl;

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t| Opcion a escoger:[1/2/3/4/5] |"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"Ingresa tu Opcion: ";

    cin>>opcion;

    switch(opcion)

   //--------------------------------------------------------------------------------------------------
    {

    case 1:
        do
            {  insertar(); //metodo para ingresar usuarios
                cout<<"\n\t\t\t ¿Desea Asignar a otro alumno? (S/N)"<<endl;
                cin>>x;//Recibe algo del usuario
            } while(x=='s'|| x=='S');// si el char que recibe el usuario es S o s repetir el ciclo
            system("cls");
            break;
        break;
 //--------------------------------------------------------------------------------------------------

    case 2:
        modificar();
        system("pause");
        system ("cls");
        break;
 //--------------------------------------------------------------------------------------------------
    case 3:
        desplegar();
        system("pause");
        system ("cls");
        break;
    case 4:
         borrar();
         system("pause");
         system ("cls");
        break;
 //--------------------------------------------------------------------------------------------------
    case 5:
        break;
 //-------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
    break;}
        }while(opcion!= 5);

}

void catalogo::desplegar()
{
    system("cls");
    int total = 0;

    // Imprimir encabezado
    cout << "\n-------------------------Bienvenido-----------------------";
    cout << "\n --- Lista de alumnos registrados en nuestro sistema  ----" << endl<<endl<<endl;

    ifstream fileDesplegar("catalogos.txt"); // Abrir el archivo para lectura

    // Verificar si el archivo se pudo abrir
    if (!fileDesplegar)
    {
        cout << "\n\t\t\tNo hay información..." << endl;
    }
    else
    {

        // Mostrar los datos en el formato deseado
        cout << " BIENVENIDO " << nombre << "----------------------------------------" << endl;

        cout << "|-------------------------------------------------------------------------------------------------------------|" << endl;
        cout << "|Boleta" << setw(15) <<"|Alumno"<< setw(19) <<"|Curso" << setw(37)<< "|Jornada"<< setw(22) <<"|Modalidad"<<setw(11)<< "|" << endl;
        cout << "|-------------------------------------------------------------------------------------------------------------|" << endl;
        string line;
        while (getline(fileDesplegar, line)) // Leer el archivo línea por línea
        {
            // Separar los datos de cada línea utilizando el delimitador '|'
            stringstream ss(line);
            string idP, nombre,  curso,  jornada, modalidad;
            getline(ss, idP, '|');
            getline(ss, nombre, '|');
            getline(ss, curso, '|');
            getline(ss, jornada, '|');
            getline(ss, modalidad, '|');


            cout <<"|"<< idP<< setw(15 -idP.size())<<"|"<< nombre << setw(20-nombre.size())<<"|" << curso << setw(35-curso.size()) <<"|" << jornada << setw(20-jornada.size())<<"|"<< modalidad <<setw(20 - modalidad.size())<<"|"<< endl;


            total++; // Incrementar el contador de alumnos
        }


       if (total == 0)
        {
            cout << "\n\t\t\tNo hay información..." << endl; // Mostrar un mensaje si no hay datos en el archivo
        }
    }

    fileDesplegar.close(); // Cerrar el archivo
}
void catalogo::catalogoCursos(string cursosD)
{
    system("cls");
    string line;
	ifstream myfile2(cursosD);
	if (myfile2.is_open())
    {
        while(getline(myfile2,line))
        {
            cout<<line<<endl;
        }

        myfile2.close();
        cout << endl << endl << endl ;
        system("pause");

    }

    else
    {
        cout<<"Error FATAL: el archivo no pudo ser cargado"<<endl;
        system("pause");
    }

}
void catalogo::insertar()
{
    system("cls");
    string idP, nombre, jornada, modalidad;
    int opcion=0;
    int numCursos=0;

    cout << "\n-------------------------------------------------Asignacion de cursos-------------------------------------------" << endl;
    cout << "Ingrese el ID de su transaccion de pago: " << endl;
    cin.ignore(); // Limpiar el búfer del teclado antes de getline()
    getline(cin, idP);

    cout << "Ingrese su Nombre:" << endl;
    getline(cin, nombre);

    this->catalogoCursos("cursos.txt");



    cout << "-----------------------------------------------" << endl;
    cout << "|  A cuantos cursos se desea asignar:          |" << endl;
    cout << "-----------------------------------------------" << endl;
    cout << " 7) SALIR DEL MENU" << endl;
    cin >> numCursos;

    vector<string> cursosSeleccionados;
    for (int i = 0; i < numCursos; ++i)
    {
        cout << "Selecciona el curso " << i + 1 << ": ";
        cin >> opcion;

    string id, curso;

    int linea = 0 ;
    ifstream fileOri("cursos2.txt");
    if (!fileOri)
    {
        cout << "\n\t\t\tNo hay informacion.." << endl;
        return;
    }
    while (
           getline(fileOri, id,'|') &&
           getline(fileOri, curso,'|')
           )
    {

        if (linea == opcion-1)
        {

           cursosSeleccionados.push_back(curso);
        }
    linea ++;
    }
    }

    cout << "-------------------------------------------" << endl;
    cout << "|       Elija la jornada que desea         |" << endl;
    cout << "-------------------------------------------" << endl;
    cout << " 1) Matutina" << endl;
    cout << " 2) Diaria" << endl;
    cout << " 3) Diurna" << endl;
    cout << " 4) Fin de semana" << endl;
    cout << "Por favor seleccione la opcion que desea: ";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        jornada = "Matutina";
        break;
    case 2:
        jornada = "Diaria";
        break;
    case 3:
        jornada = "Diurna";
        break;
    case 4:
        jornada = "Fin de semana";
        break;
    default:
        cout << "Opcion invalida. Por favor prueba otra vez." << endl;
        break;
    }

    system("cls");

    cout << "-------------------------------------------" << endl;
    cout << "|       Elija la Modalidad                |" << endl;
    cout << "-------------------------------------------" << endl;
    cout << " 1) Presencial" << endl;
    cout << " 2) Virtual" << endl;
    cout << " 3) Hibrida" << endl;
    cout << "Por favor seleccione la opcion que desea: ";
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        modalidad = "Presencial";
        break;
    case 2:
        modalidad = "Virtual";
        break;
    case 3:
        modalidad = "Hibrida";
        break;
    default:
        cout << "Opcion invalida. Por favor prueba otra vez." << endl;
        break;
    }

    // Abre el archivo "catalogos.txt" en modo de apendizaje y escritura
    ofstream fileIngresar("catalogos.txt", ios::app);
    if (!fileIngresar)
    {
        cout << "Error al abrir el archivo catalogos.txt" << endl;
        return;
    }

    // Escribe en el archivo los datos del usuario ingresados por el usuario
    for (const string &curso : cursosSeleccionados)
    {

        fileIngresar << idP << "|" << nombre << "|"  << curso << "|" << jornada << "|" << modalidad << "|"  <<"\n";
    }

    // Cierre del archivo
    fileIngresar.close();

    // Mensaje de éxito
    cout << "\t\t\tAsignado a sus cursos exitosamente." << endl;
}


void catalogo::modificar()
{
    system("cls");
    int opcion=0;
    ifstream fileOri("catalogos.txt"); // Abrir el archivo original para lectura
    if (!fileOri)
    {
        cout << "\n\t\t\tNo hay informacion.." << endl;
        return;
    }

    ofstream fileModif("temp.txt"); // Abrir el archivo temporal para escritura
    if (!fileModif)
    {
        cout << "\n\t\t\tError al abrir archivo temporal.." << endl;
        return;
    }

    string nombreModificar;
    cout << "\n-------------------------Modificacion de reservacion -------------------------" << endl;
    cout << "\nIngrese el nombre del alumno que desea modificar: ";
    cin.ignore();
    getline(cin, nombreModificar);

    string idP, nombre, id, curso, curso2, jornada, modalidad;
    bool encontrado = false;
    while (getline(fileOri, idP, '|') &&
           getline(fileOri, nombre, '|') &&
           getline(fileOri, id, '|') &&
           getline(fileOri, curso, '|') &&
           getline(fileOri, curso2, '|') &&
           getline(fileOri, jornada, '|') &&
           getline(fileOri, modalidad))
    {
        if (nombre == nombreModificar)
        {
            encontrado = true;
            cout << "\n Elija nuevamente la modalidad: "<<endl;
            cout <<" 1) Presencial"<<endl;
            cout <<" 2) Virtual"<<endl;
            cout <<" 3) Hibrida"<<endl;
            cout <<" Por favor seleccione la opcion que desea: "<<endl;
            cin >> opcion;

    switch (opcion)
    {
        case 1:
            modalidad = "Presencial";
            break;
        case 2:
            modalidad = "Virtual";
            break;
        case 3:
            modalidad = "Hibrida";
            break;
        default:
            cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
            break;
    }

            cout << "\nIngrese la jornada a la que desea cambiar: "<<endl;
            cout <<" 1) Matutina"<<endl;
            cout <<" 2) Diaria"<<endl;
            cout <<" 3) Diurna"<<endl;
            cout <<" 4) Fin de semana"<<endl;
            cout <<" Por favor seleccione la opcion que desea: "<<endl;
            cin>>opcion;

    switch (opcion)
{
    case 1:
        jornada = "Matutina";
        break;
    case 2:
        jornada = "Diaria";
        break;
    case 3:
        jornada = "Diurna";
        break;
    case 4:
        jornada = "Fin de semana";
        break;
    default:
        cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
        break;
}
        }
        fileModif << idP << "|" << nombre << "|" << id << "|" << curso << "|" << curso2 << "|" << jornada << "|" << modalidad << "\n";
    }

    fileOri.close();
    fileModif.close();

    if (!encontrado)
    {
        cout << "\n\t\t\tNombre del alumno no encontrado..." << endl;
        remove("temp.txt"); // Eliminar el archivo temporal si no se encontró el nombre del alumno
    }
    else
    {
        remove("catalogos.txt"); // Eliminar el archivo original
        rename("temp.txt", "catalogos.txt"); // Renombrar el archivo temporal
        cout << "\n\t\t\tAlumno modificado exitosamente." << endl;
    }
}

void catalogo::borrar()
{
    system("cls");
    ifstream file("catalogos.txt"); // Abre el archivo para lectura
    ofstream tempFile("temp.txt"); // Abre un archivo temporal para escribir

    string alumnoEliminar;
    int encontrados = 0;

    cout << "\n-------------------------Asignacion que desea borrar-------------------------" << endl;
    cout << "\nIngrese el nombre del Alumno que desea eliminar : " << endl;
    cin.ignore();
    getline(cin, alumnoEliminar);

    string idP, nombre, id, curso, curso2, jornada, modalidad;

    while (getline(file, idP, '|') &&
           getline(file, nombre, '|') &&
           getline(file, id, '|') &&
           getline(file, curso, '|') &&
           getline(file, curso2, '|') &&
           getline(file, jornada, '|') &&
           getline(file, modalidad))
    {
        if (nombre != alumnoEliminar)
        {
            tempFile << idP << "|" << nombre << "|" << id << "|" << curso << "|" << curso2 << "|" << jornada << "|" << modalidad << "\n";
        }
        else
        {
            encontrados++;
            cout << "\n\t\t\tBorrado de informacion exitoso"<<endl;
        }
    }

    if (encontrados == 0)
    {
        cout << "\n\t\t\t Nombre del Usuario no encontrado...";
    }

    file.close();
    tempFile.close();

    remove("catalogos.txt");
    rename("temp.txt", "catalogos.txt");
}
