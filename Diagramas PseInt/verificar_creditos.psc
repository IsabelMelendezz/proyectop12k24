Algoritmo verificar_creditos
    Definir nombre_alumno Como Caracter;
    Definir cantidad_cursos Como Entero;
    Escribir "Ingrese su nombre";
    leer nombre_alumno;
    escribir "Ingrese la cantidad de cursos a los que desea asignarse (Hay 6 cursos disponibles):";
    leer cantidad_cursos;
    Limpiar Pantalla;
    escribir "--------------------------------------------------------";
    escribir "|           Bienvenido a nuestro Sistema                |";
    escribir "|        Elija las opciones de curso que desea          |";
    escribir "--------------------------------------------------------";
    Escribir "";
    escribir "-------------------------------------------------------------------";
    escribir "| No  |Codigo del curso |       Cursos Disponibles      | Creditos |";
    escribir "-------------------------------------------------------------------|";
    escribir "| 1   |      091        |     Fisica                    |    10    |";
    escribir "| 2   |      092        |     Calculo I                 |    15    |";
    escribir "| 3   |      093        |     Programacion I            |    15    |";  
    escribir "| 4   |      094        |     Derecho I                 |     8    |";
    escribir "| 5   |      095        |     Procesos Administrativos  |     6    |";
    escribir "| 6   |      096        |     Emprendedores de Negocios |     9    |";
    escribir "--------------------------------------------------------------------";
    
    Para i desde 1 hasta cantidad_cursos Hacer
        escribir "Ingrese el número del curso al que desea asignarse:";
        leer opc;
        Segun opc Hacer
            1:
                escribir "Ingrese la cantidad de creditos que tiene:";
                leer crd;
                Si crd>=10 Entonces
                    escribir "Asignado al curso de Fisica exitosamente";
                Sino
                    escribir "No llega a los requisitos válidos, no puede asignarse, intente con otro";
					
                Fin Si;
            2:
                escribir "Ingrese la cantidad de creditos que tiene:";
                leer crd;
                Si crd>=15 Entonces
                    escribir "Asignado al curso de Calculo I exitosamente";
                Sino
                    escribir "No llega a los requisitos válidos, no puede asignarse";
                Fin Si;
            3:
                escribir "Ingrese la cantidad de creditos que tiene:";
                leer crd;
                Si crd>=15 Entonces
                    escribir "Asignado al curso de Programacion I exitosamente";
                Sino
                    escribir "No llega a los requisitos válidos, no puede asignarse";
                Fin Si;
            4:
                escribir "Ingrese la cantidad de creditos que tiene:";
                leer crd;
                Si crd>=8 Entonces
                    escribir "Asignado al curso de Derecho I exitosamente";
                Sino
                    escribir "No llega a los requisitos válidos, no puede asignarse";
                Fin Si;
            5:
                escribir "Ingrese la cantidad de creditos que tiene:";
                leer crd;
                Si crd>=6 Entonces
                    escribir "Asignado al curso de Procesos Administrativos exitosamente";
                Sino
                    escribir "No llega a los requisitos válidos, no puede asignarse";
                Fin Si;
            6:
                escribir "Ingrese la cantidad de creditos que tiene:";
                leer crd;
                Si crd>=9 Entonces
                    escribir "Asignado al curso de Emprendedores de Negocios exitosamente";
                Sino
                    escribir "No llega a los requisitos válidos, no puede asignarse";
                Fin Si;
            De Otro Modo:
                escribir "Opcion fuera de rango, intente nuevamente";
        Fin Segun;
    Fin Para;
    
	escribir "El/La alumno/a: ", nombre_alumno, " se ha asignado a los siguientes cursos:";
	Para i desde 1 hasta cantidad_cursos Hacer
		Si i == 1 Entonces
			Curso = "Fisica";
		SiNo
			Si i == 2 Entonces
				Curso = "Calculo I";
			SiNo
				Si i == 3 Entonces
					Curso = "Programacion I";
				SiNo
					Si i == 4 Entonces
						Curso = "Derecho I";
					SiNo
						Si i == 5 Entonces
							Curso = "Procesos Administrativos";
						SiNo
							Curso = "Emprendedores de Negocios";
						Fin Si
					Fin Si
				Fin Si
			Fin Si
		Fin Si
		escribir "- Curso ", i, ": ", Curso;
	Fin Para
	
   
       
		
FinAlgoritmo