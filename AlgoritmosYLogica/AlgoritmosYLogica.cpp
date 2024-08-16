// AlgoritmosYLogica.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;


int sumAlg(int a, int b) {
	int result = ((a * -1) - b);
	return result * -1;
}

int subAlg(int a, int b) {
	int newB = b * -1;

	return a + newB;
}

int multAlg(int a, int b) {
	int value = 0;
	if (b < 0) {
		for (int i = 0; i < a; i++) {
			value += b;
		}
	}
	else {
		for (int i = 0; i < b; i++) {
			value += a;
		}
	}
	return value;
}

int divAlg(int a, int b) {
	int value = 0;
	while (a >= b) {
		value++;
		a = subAlg(a, b);
	}
	cout << "15 / 3 = " << value << "( " << a << " )" << endl;
	return value;
}


int powNumber(int a, int b) {

	if (b == 0) {
		cout << "El resultado de " << a << " potencia de " << b << " es 1" << endl;
		return 1;
	}
	int value = a;
	for (int i = 1; i < b; i++) {
		value *= a;
	}
	cout << "El resultado de " << a << " potencia de " << b << " es " << value << endl;
	return value;
}

int factorNumber(int a) {
	if (a == 0) {
		cout << "El resultado de el factorial de " << a << " es " << 1 << endl;
		return 1;
	}

	int value = a;
	for (int i = a - 1; i > 1; i--) {
		value *= i;
	}
	cout << "El resultado de el factorial de " << a << " es " << value << endl;
	return value;

}

int isGuay(int a) {

	int sumNumber = 0;
	int i = 1;
	bool isGuay = false;
	while (sumNumber < a) {
		sumNumber += i;
		i++;
	}
	if (sumNumber == a) {
		isGuay = true;
		cout << "El número " << a << " es guay " << endl;
		return sumNumber;
	}
	cout << "El número " << a << " no es guay " << endl;
	return sumNumber;
}



void main()
{
    std::cout << "Hello World!\n";
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
