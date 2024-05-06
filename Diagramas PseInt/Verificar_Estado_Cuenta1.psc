Proceso VerificarEstadoCuenta
    Definir opcion Como Entero;
    Definir dire Como Cadena;
    Definir estadoCuenta Como Cadena;
    Definir inscrito Como Logico;
	
    // Inicializar variables
    estadoCuenta <- "Desconocido";
    inscrito <- Falso;
	
    // Mostrar menú
    Escribir "Menú de opciones:";
    Escribir "1. Verificar estado de cuenta";
    Escribir "2. Verificar inscripción";
    Escribir "3. Salir";
	
    Leer opcion;
	
    // Procesar opción seleccionada
    Segun opcion Hacer
        1:
            Escribir "Ingrese DIRE del alumno:";
            Leer dire;
            // Verificar estado de cuenta
            Si dire = "12345678" Entonces
                estadoCuenta <- "Al día";
            SiNo
                estadoCuenta <- "Adeuda";
            FinSi
            Escribir "Estado de cuenta: ", estadoCuenta;
        2:
            Escribir "Ingrese DIRE del alumno:";
            Leer dire;
            // Verificar inscripción
            Si dire = "12345678" Entonces
                inscrito <- Verdadero;
            SiNo
                inscrito <- Falso;
            FinSi
            Si inscrito Entonces
                Escribir "El alumno está inscrito";
            SiNo
                Escribir "El alumno no está inscrito";
            FinSi
        3:
            Escribir "Saliendo...";
            Salir<-();
        De Otro Modo:
            Escribir "Opción inválida";
    FinSegun
	
FinProceso