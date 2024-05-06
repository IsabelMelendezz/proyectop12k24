Algoritmo AsignacionCursos
	Definir boleta Como Cadena
	Definir nombreAlumno Como Cadena
	Definir creditos Como Entero
	Definir cursosDisponibles Como Cadena
	Definir opcionJornada Como Cadena
	Definir deseaBoleta Como Cadena
	Escribir 'Bienvenido al sistema de asignación de cursos.'
	Escribir 'Por favor, ingresa los siguientes datos:'
	Repetir
		Escribir 'Número de boleta (4 dígitos):'
		Leer boleta
	Hasta Que longitud(boleta)=4
	Escribir 'Nombre del alumno:'
	Leer nombreAlumno
	Escribir 'Cantidad de créditos disponibles:'
	Leer creditos
	cursosDisponibles <- 'Fisica I, Calculo I, Derecho informatico, Programacion'
	Si creditos>50 Entonces
		Escribir 'Puedes escoger los siguientes cursos:', cursosDisponibles
	SiNo
		Escribir 'Créditos insuficientes para escoger cursos.'
	FinSi
	Escribir 'Escoge la jornada (Presencial, Hibrida, Virtual):'
	Leer opcionJornada
	Escribir '¿Deseas obtener tu boleta de asignación de cursos? (S/N):'
	Leer deseaBoleta
	Si deseaBoleta='S' Entonces
		Escribir 'Boleta de asignación de cursos:'
		Escribir '---------------------------------'
		Escribir 'Número de boleta:', boleta
		Escribir 'Nombre del alumno:', nombreAlumno
		Escribir 'Cursos seleccionados:', cursosDisponibles
		Escribir 'Jornada elegida:', opcionJornada
	FinSi
FinAlgoritmo
