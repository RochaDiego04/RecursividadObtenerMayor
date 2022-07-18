
#include <iostream>
using namespace std;


void obtenerMayor(int* arregloNumeros, int tamanio, int indiceActual, int& max) {
	if (indiceActual > tamanio - 1) {
		return;
	}
	if (arregloNumeros[indiceActual] > max)max = arregloNumeros[indiceActual];
	obtenerMayor(arregloNumeros, tamanio, indiceActual + 1, max);
}


int main() {
	int const tamanio = 10;
	int arregloNumeros[tamanio];
	int max = 1, i = 0;
	for (i = 0; i < tamanio; i++) {
		cout << "Numero: " << endl;
		cin >> arregloNumeros[i];
	}
	obtenerMayor(arregloNumeros, tamanio, 0, max);
	cout << "Mayor es: " << max << endl;
	return 0;
}