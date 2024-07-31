#include <iostream>
#include <string>
#include <cmath> // Cambiado a cmath para usar pow()

using namespace std;

// Función recursiva para la suma de los primeros n números naturales
int sumaRecursiva(int n) {
    if (n <= 1) {
        return n;
    } else {
        return n + sumaRecursiva(n - 1);
    }
}

// Función recursiva para sumar los cuadrados de números pares hasta n
int cuadradosPares(int n) {
    if (n == 0) {
        return 0;
    } else if (n % 2 == 0) {
        return n * n + cuadradosPares(n - 1);
    } else {
        return cuadradosPares(n - 1);
    }
}

// Función recursiva alternativa para sumar los cuadrados de números pares hasta n
int cuadradosPares2(int n) {
    if (n == 0) {
        return 0;
    } else if (n % 2 == 0) {
        return pow(n, 2) + cuadradosPares2(n - 1);
    } else {
        return cuadradosPares2(n - 1);
    }
}

// Función recursiva para calcular el n-ésimo número de Fibonacci
int fibNumero(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibNumero(n - 1) + fibNumero(n - 2);
    }
}

// Función recursiva para buscar un carácter en una cadena de forma lineal
bool lineal(string s, char c, int l) {
    if (l < 0) {
        return false;
    } else if (s[l] == c) {
        return true;		
    } else {
        return lineal(s, c, l - 1);
    }
}

int main() {
    int eleccion = 0;
    int n;
    int resultado;

    while (eleccion != 6) {
        cout << "|-----------------------------------------------Menu de opciones:------------------------------------------------|" << endl;
        cout << "|---------------------------------1. Suma recursiva de números naturales hasta n.--------------------------------|" << endl;
        cout << "|---------------------------------2. Suma de cuadrados de números pares hasta n.---------------------------------|" << endl;
        cout << "|-------------------------3. Suma de cuadrados de números pares (otra versión) hasta n.--------------------------|" << endl;
        cout << "|-----------------------------------4. Calcular el n-ésimo número de Fibonacci.----------------------------------|" << endl;
        cout << "|------------------------------5. Buscar un carácter en una cadena de forma lineal.------------------------------|" << endl;
        cout << "|---------------------------------------------------6. Salir.----------------------------------------------------|" << endl;
        cout << "|Ingrese su eleccion: ";
        cin >> eleccion;

        switch (eleccion) {
            case 1:
                cout << "Ingrese el número hasta el cual desea sumar: ";
                cin >> n;
                resultado = sumaRecursiva(n);
                cout << "Resultado de la suma recursiva: " << resultado << endl;
                break;
            case 2:
                cout << "Ingrese el número hasta el cual desea sumar los cuadrados pares: ";
                cin >> n;
                resultado = cuadradosPares(n);
                cout << "Resultado de la suma de cuadrados pares: " << resultado << endl;
                break;
            case 3:
                cout << "Ingrese el número hasta el cual desea sumar los cuadrados pares: ";
                cin >> n;
                resultado = cuadradosPares2(n);
                cout << "Resultado de la suma de cuadrados pares: " << resultado << endl;
                break;
            case 4:
                cout << "Ingrese el valor de n para el número de Fibonacci: ";
                cin >> n;
                resultado = fibNumero(n);
                cout << "El " << n << "-ésimo número de Fibonacci es: " << resultado << endl;
                break;
            case 5: {
                string palabra;
                char caracter;
                cout << "Ingrese la palabra en la que buscar: ";
                cin >> palabra;
                cout << "Ingrese el carácter a buscar: ";
                cin >> caracter;
                resultado = lineal(palabra, caracter, palabra.length() - 1);
                if (resultado) {
                    cout << "El carácter '" << caracter << "' está presente en la palabra." << endl;
                } else {
                    cout << "El carácter '" << caracter << "' no está presente en la palabra." << endl;
                }
                break;
            }
            case 6:
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, ingrese una opción válida del menú." << endl;
                break;
        }
        cout << endl;
    }

    return 0;
}
