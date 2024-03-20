#include <iostream>

using namespace std;

int main()
{
    cout << "07 Programa que calcula el valor del interes y la ganancia de una inversion con interes simple" << endl;
    double capital, tasa, tiempo, interes, valorFuturo;

    // Ingresar el capital a invertir, la tasa de interés y el tiempo.
    // Nota: El capital, la tasa de interés y el tiempo deben ser mayores a 0!
    cout << "Ingrese el monto a invertir: ";
    cin >> capital;
    cout << "Ingrese la tasa de interes (%): ";
    cin >> tasa;
    cout << "Ingrese el tiempo de inversion (en anios): ";
    cin >> tiempo;

    // Calcular el monto del interés (Fórmula del Interés Simple)
    interes = capital * (tasa / 100) * tiempo;
    // Calcular el valor a futuro de la inversión (Fórmula del Interés Simple)
    valorFuturo = capital * (1 + ((tasa / 100) * tiempo));
    cout << endl;
    // Mostrar el resultado en consola.
    cout << "El valor del interes es: " << interes << " USD." << endl;
    cout << "El valor a futuro obtenido es: " << valorFuturo << " USD.";
    return 0;
}