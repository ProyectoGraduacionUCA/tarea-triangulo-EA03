#include <iostream>

using namespace std;

void imprimirTriangulo(int altura) {
    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int h1, h2, h3;

    // Solicitar las alturas de los triangulos
    cout << "Ingrese tres valores enteros positivos: ";
    cin >> h1 >> h2 >> h3;

    // Imprimir los tres triangulos
    cout << "\nTriangulo 1:\n";
    imprimirTriangulo(h1);
    
    cout << "\nTriangulo 2:\n";
    imprimirTriangulo(h2);
    
    cout << "\nTriangulo 3:\n";
    imprimirTriangulo(h3);

    return 0;
}