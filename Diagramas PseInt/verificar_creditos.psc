Algoritmo verificar_creditos
	Definir nombre_alumno Como Cadena;
	Definir cantidad_cursos Como Entero;
	Escribir 'Ingrese su nombre';
	Leer nombre_alumno;
	Escribir 'Ingrese la cantidad de cursos a los que desea asignarse (Hay 6 cursos disponibles):';
	Leer cantidad_cursos;
	Limpiar Pantalla;
	Escribir '--------------------------------------------------------';
	Escribir '|           Bienvenido a nuestro Sistema                |';
	Escribir '|        Elija las opciones de curso que desea          |';
	Escribir '--------------------------------------------------------';
	Escribir '';
	Escribir '-------------------------------------------------------------------';
	Escribir '| No  |Codigo del curso |       Cursos Disponibles      | Creditos |';
	Escribir '-------------------------------------------------------------------|';
	Escribir '| 1   |      091        |     Fisica                    |    10    |';
	Escribir '| 2   |      092        |     Calculo I                 |    15    |';
	Escribir '| 3   |      093        |     Programacion I            |    15    |';
	Escribir '| 4   |      094        |     Derecho I                 |     8    |';
	Escribir '| 5   |      095        |     Procesos Administrativos  |     6    |';
	Escribir '| 6   |      096        |     Emprendedores de Negocios |     9    |';
	Escribir '--------------------------------------------------------------------';
	Para i<-1 Hasta cantidad_cursos Hacer
		Escribir 'Ingrese el número del curso al que desea asignarse:';
		Leer opc;
		Según opc Hacer
			1:
				Escribir 'Ingrese la cantidad de creditos que tiene:';
				Leer crd;
				Si crd>=10 Entonces
					Escribir 'Asignado al curso de Fisica exitosamente';
				SiNo
					Escribir 'No llega a los requisitos válidos, no puede asignarse, intente con otro';
				FinSi
			2:
				Escribir 'Ingrese la cantidad de creditos que tiene:';
				Leer crd;
				Si crd>=15 Entonces
					Escribir 'Asignado al curso de Calculo I exitosamente';
				SiNo
					Escribir 'No llega a los requisitos válidos, no puede asignarse';
				FinSi
			3:
				Escribir 'Ingrese la cantidad de creditos que tiene:';
				Leer crd;
				Si crd>=15 Entonces
					Escribir 'Asignado al curso de Programacion I exitosamente';
				SiNo
					Escribir 'No llega a los requisitos válidos, no puede asignarse';
				FinSi
			4:
				Escribir 'Ingrese la cantidad de creditos que tiene:';
				Leer crd;
				Si crd>=8 Entonces
					Escribir 'Asignado al curso de Derecho I exitosamente';
				SiNo
					Escribir 'No llega a los requisitos válidos, no puede asignarse';
				FinSi
			5:
				Escribir 'Ingrese la cantidad de creditos que tiene:';
				Leer crd;
				Si crd>=6 Entonces
					Escribir 'Asignado al curso de Procesos Administrativos exitosamente';
				SiNo
					Escribir 'No llega a los requisitos válidos, no puede asignarse';
				FinSi
			6:
				Escribir 'Ingrese la cantidad de creditos que tiene:';
				Leer crd;
				Si crd>=9 Entonces
					Escribir 'Asignado al curso de Emprendedores de Negocios exitosamente';
				SiNo
					Escribir 'No llega a los requisitos válidos, no puede asignarse';
				FinSi
			De Otro Modo:
				Escribir 'Opcion fuera de rango, intente nuevamente';
		FinSegún
	FinPara
	Escribir 'El/La alumno/a: ', nombre_alumno, ' se ha asignado a los siguientes cursos:';
	Para i<-1 Hasta cantidad_cursos Hacer
		Si i==1 Entonces
			Curso <- 'Fisica';
		SiNo
			Si i==2 Entonces
				Curso <- 'Calculo I';
			SiNo
				Si i==3 Entonces
					Curso <- 'Programacion I';
				SiNo
					Si i==4 Entonces
						Curso <- 'Derecho I';
					SiNo
						Si i==5 Entonces
							Curso <- 'Procesos Administrativos';
						SiNo
							Curso <- 'Emprendedores de Negocios';
						FinSi
					FinSi
				FinSi
			FinSi
		FinSi
		Escribir '- Curso ', i, ': ', Curso;
	FinPara
FinAlgoritmo
