#include "notas.h"
#include <cstdlib>
#include <conio.h>
#include <iomanip>

using namespace std;

void notas::menu()
{
    int choice;
	char x;
    std::cout << "NOTAS" << std::endl;
    do
    {
        system("cls");
        cout<<"\t\t\t-------------------------------"<<endl;
        cout<<"\t\t\t |       GESTION DE NOTAS     |"<<endl;
        cout<<"\t\t\t-------------------------------"<<endl;
        cout<<"\t\t\t 1. Ingresar Notas"<<std::endl;
        cout<<"\t\t\t 2. Mostrar Notas"<<std::endl;
        cout<<"\t\t\t 3. Modificar Nota"<<std::endl;
        cout<<"\t\t\t 4. Buscar Nota"<<std::endl;
        cout<<"\t\t\t 5. Borrar Nota"<<std::endl;
        cout<<"\t\t\t 6. Salir"<<std::endl;

        cout<<"\t\t\t-------------------------------"<<endl;
        cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5/6]"<<endl;
        cout<<"\t\t\t-------------------------------"<<endl;
        cout<<"Ingresa tu Opcion: ";
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
                std::cout<<"\n\t\t\t Opcion invalida... Por favor prueba otra vez..";
              	cin.get();
        }

    } while(choice!= 6);
}

