// PracticaPostParcial.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

// Recordatorio: el using namespace std evita escribir std:: cada vez que 
// Llamo a cout
using namespace std;

void menu() {
	cout << "Selecciona el ejercicio a ejecutar: 2, 3, 4, 5 , 7 o 8" << endl;
}

void ejercicio2() {
	// 2) Coutear (usar cout) el hola mundo
	cout << "Hello World!\n"; // \n significa salto de linea.
	// Otra forma de escribir el salto de linea es usando endl;
	cout << "Hello World con endl!" << endl;
}

void ejercicio3() {
	// 3) (If) Un programa que diga la paridad de un número introducido por el usuario
	int numero;
	// Regla general para un buen desarrollo. Explicar que queres que haga el usuario con 
	// el ingreso de los datos.
	cout << "Por favor ingrese un numero y el programa determinara si es par o no" << endl;
	cin >> numero;
	// Recordar que antes de usar la variable numero, se debe inicializar. 
	// En este caso lo hacemos con cin.
	bool esPar = ((numero % 2) == 0);
	if (esPar) {  // determino si el numero es par o no
		cout << "El numero es par" << endl;
	}
	else {
		cout << "El numero es impar" << endl;
	}

}

void ejercicio4()
{
	//4)(Switch)Dada la nota de un examen que se califica del 1 al 10, 
	//indicar si aprobo, promociono o reprobó sabiendo que menos de 4 es
	//reprobado, menos de 8 es aprobado y mas de 8 es promocionado.Extra, 
	//que la nota de examen sea introducida por el usuario y luego le diga
	//el resultado.
	cout << "Ingrese la nota de un examen del 1 al 10" << endl;
	int nota; // Recordar definir una variable que indique el proposito. 
			  //En esta caso nota.
	cin >> nota; // SIEMPRE inicializar la variable antes de usarla.
	switch (nota) {
		// Recuerden que switch necesita cada case... que vayan a evaluar.
	case 1:
	case 2:
	case 3:
		cout << "Desaprobo..." << endl;
		break;
	case 4:
	case 5:
	case 6:
	case 7:
		cout << "Aprobo..." << endl;
		break;
	case 8:
	case 9:
	case 10:
		cout << "Promociono!" << endl;
		break;
	default:
		cout << "Nota fuera de rango" << endl;
		break;
	}
}

void ejericio5()
{
	/*5)(For)En Street Fighter Chun Li pega la cantidad de patadas
	consecutivas que introdujo el usuario, cada patada pega un
	daño de 10, el contrincante va a bloquear 1 de cada 3 ataques
	a. Indicar cuantos ataques exitosos hubo(que no fueron
	cubiertos por el contrincante).
	b. Indicar cual fue el daño final
	c. En caso de una patada sea bloqueada indicar
	“Ataque bloqueado”.
	d. En todos los casos imprimir el daño realizado.
	*/
	// Como siempre, debo informarle al usuario que datos ingresar.
	cout << "Ingrese la cantidad de patadas de Chun Li.." << endl;
	int patadas; // Defino variable a usar.
	cin >> patadas; // SIEMPRE inicializo variable antes de usarla.
					// En este caso con cin.
	int damage = 0; // Defino una variable para el daño...
	const int KICK_DAMAGE = 10;
	for (int i = 0; i < patadas; i++) {
		// De esta forma vemos cuando Chun Li pega una patada
		cout << "Chun Li patada..." << i << endl;

		// Escribo una condicion que determine si Chun Li
		// Pudo golpear al contrincante...
		// Decido evaluar si la patada es multiplo de 5
		bool noEsBloqueado = ((i % 5) == 0);
		if (noEsBloqueado) {
			damage += KICK_DAMAGE;
		}
		else {
			cout << "Golpe bloqueado..." << endl;
		}

	}
	cout << "El daño realizado fue... " << damage << endl;
}

int factorial(int n) {
	int factorial = n;
	int acumulado = 1;
	for (int i = factorial; i >= 0; i--) {
		if (i == 0) {
			acumulado *= 1;
		}
		else {
			acumulado *= i;
		}
	}
	return acumulado;
}

void ejercicio7()
{
	/*7)En un juego de estrategia una IA calcula la cantidad de
	posibilidades que tiene de perder, sabiendo que esa cantidad
	aumenta a medida que hay más enemigos.
	Para ello realiza un cálculo sencillo: La cantidad de chances
	de morir es igual al factorial del número de enemigos que hay
	en pantalla invocados por el jugador.
	Sabiendo que el jugador invoca un mínimo de 0 enemigos y un máximo
	de 7, indicar cuantas chances de perder tiene.
	El factorial de un entero positivo n, el factorial de n o n
	factorial se define en principio como el producto de todos los
	números enteros positivos desde 1 (es decir, los números
	naturales)hasta n inclusive. Por ejemplo:

	Factorial de 0 = 1
	Factorial de 1 = 1
	Factorial de 2 = 1x2 = 2
	Factorial de 3 = 1x2x3 = 6
	Factorial de 4 = 1x2x3x4 = 24
	Factorial de 5 = 1x2x3x4x5 = 120
	Factorial de 6 = 1x2x3x4x5x6 = 720
	Factorial de 7 = 1x2x3x4x5x6x7 = 5040

	*/

	cout << "Ingrese el numero de enemigos entre 0 y 7" << endl;
	int enemigos = 0;
	// Siempre inicializar antes de usar la variable.
	cin >> enemigos;
	
	if (enemigos > 0 && enemigos <= 7) {
		int posibildiad = factorial(enemigos);
		cout << "Las posibilidades de perder con enemigos: " << enemigos << " es de: " << posibildiad << endl;
	}
	else {
		cout << "Valores fuera de rango.." << endl;
	}

}

// OTRA FORMA de DEFINIR VALORES CONSTANTES!!
#define ROWS 2
#define COLS 2

void ejercicio8() {
	/*
	8)Se debe generar de manera manual el mapa para un mod de
	Minecraft a partir de un tablero de 50x50.
	Le va a solicitar al jugador que ingrese por consola el 
	nombre de la unidad que debe guardarse en cada celda los 
	siguientes elementos que representados por un carácter:
	● Casillero vacío, carácter: “0”
	● Bloque de tierra, carácter: “T”
	● Cofre, carácter: “$”
	● Enemigo, carácter: “E”
	Una vez completada la carga, mostrar todos los valores 
	almacenados por pantalla
	*/
	char map[ROWS][COLS];

	cout << "Deberas llenar el mapa con Filas: " << ROWS << " y Columnas: " << COLS << endl;
	cout << "Con los valores permitidos que son:" << endl;
	cout << "Casillero vacio, caracter: 0" << endl;
	cout << "Bloque de tierra, caracter : T" << endl;
	cout << "Cofre, caracter : $ " << endl;
	cout << "Enemigo, caracter : E" << endl;

	char datoMapa = '0';

	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			cout << "Ahora si, ingresa el dato del mapa para fila: " << i << ", Columna: " << j << endl;
			// Inicializar datos antes de ser usados..
			cin >> datoMapa;
			if ((datoMapa == 'E') || (datoMapa == 'T') || (datoMapa == '$') || (datoMapa == '0')) {
				map[i][j] = datoMapa;
			}
			else {
				cout << "Dato ingresado incorrecto... el valor asignado por defecto sera 0" << endl;
				map[i][j] = '0';
			}
		}
	}

	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			cout << map[i][j];
		}
		cout << endl;
	}

}

int main()
{
	menu();
	int opcion = 0;
	cin >> opcion;

	switch (opcion)
	{
	case 2:
		ejercicio2();
		break;
	case 3:
		ejercicio3();
		break;
	case 4:
		ejercicio4();
		break;
	case 5:
		ejericio5();
		break;
	case 7:
		ejercicio7();
		break;
	case 8:
		ejercicio8();
		break;
	default:
		break;
	}
	

}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
