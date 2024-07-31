/********************************
 * Autores: Santiago Camargo
 * Materia: Estructura de Datos
 * Fecha: 31-Jul-2024
********************************/
#include <iostream>
#include <string>
#include <cmath> // Cambiado a cmath para usar pow()
#include "biblioteca.h"

using namespace std;



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
