Proceso VerificarEstadoCuenta
    Definir opcion Como Entero;
    Definir dire Como Cadena;
    Definir estadoCuenta Como Cadena;
    Definir inscrito Como Logico;
	
    // Inicializar variables
    estadoCuenta <- "Desconocido";
    inscrito <- Falso;
	
    // Mostrar men�
    Escribir "Men� de opciones:";
    Escribir "1. Verificar estado de cuenta";
    Escribir "2. Verificar inscripci�n";
    Escribir "3. Salir";
	
    Leer opcion;
	
    // Procesar opci�n seleccionada
    Segun opcion Hacer
        1:
            Escribir "Ingrese DIRE del alumno:";
            Leer dire;
            // Verificar estado de cuenta
            Si dire = "12345678" Entonces
                estadoCuenta <- "Al d�a";
            SiNo
                estadoCuenta <- "Adeuda";
            FinSi
            Escribir "Estado de cuenta: ", estadoCuenta;
        2:
            Escribir "Ingrese DIRE del alumno:";
            Leer dire;
            // Verificar inscripci�n
            Si dire = "12345678" Entonces
                inscrito <- Verdadero;
            SiNo
                inscrito <- Falso;
            FinSi
            Si inscrito Entonces
                Escribir "El alumno est� inscrito";
            SiNo
                Escribir "El alumno no est� inscrito";
            FinSi
        3:
            Escribir "Saliendo...";
            Salir<-();
        De Otro Modo:
            Escribir "Opci�n inv�lida";
    FinSegun
	
FinProceso