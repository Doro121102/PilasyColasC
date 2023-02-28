//Dorian Daniel Colorado Say
// Progra III
//Seccion A
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stack>
#include <queue>

using namespace std;

int main() {

    srand(time(NULL));

    int min = -10000000;
    int max = 10000000;

    int opcion;
    cout << "Seleccione una opción de procesamiento:" << endl;
    cout << "1. Pila" << endl;
    cout << "2. Cola" << endl;
    cin >> opcion;

    const int n = 1000000;
    int numeros[n];
    for (int i = 0; i < n; i++) {
        numeros[i] = rand() % (max - min + 1) + min;
    }

       if (opcion == 1) {
        stack<int> pila;
        for (int i = 0; i < n; i++) {
            pila.push(numeros[i]);
        }
        while (!pila.empty()) {
            int numero = pila.top();
            pila.pop();
            
        }
    } else if (opcion == 2) {
        queue<int> cola;
        for (int i = 0; i < n; i++) {
            cola.push(numeros[i]);
        }
        while (!cola.empty()) {
            int numero = cola.front();
            cola.pop();          
        }
    } else {
        cout << "Opción inválida." << endl;
    }

    return 0;
}

