/********************************
 * Autores: Santiago Camargo
 * Materia: Estructura de Datos
 * Fecha: 31-Jul-2024
********************************/
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


