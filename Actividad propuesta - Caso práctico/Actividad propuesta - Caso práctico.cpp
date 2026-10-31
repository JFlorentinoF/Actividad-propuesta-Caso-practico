

#include <iostream>

using namespace std;

double calcularTotalPagar(int cantidad, double precio) {
    double total = cantidad * precio;
    if (total > 5000) {
        total = total * 0.90;
    }
    return total;
}

void mostrarTotal(double totalPagar) {
    cout << "Total a pagar: " << totalPagar << endl;
}

int main() {
    int cantidad;
    double precio;

    cout << "TOTAL A PAGAR EN SU COMPRA: \n\nIntoduzca la cantidad de articulos:" << endl;
    cin >> cantidad;

    cout << "Introduzca el precio del articulo:" << endl;
    cin >> precio;

    double totalFinal = calcularTotalPagar(cantidad, precio);
    mostrarTotal(totalFinal);

    return 0;
}