#include <iostream>

using namespace std;

// Conversión de quetzales a diferentes monedas
const float Dolar = 0.13;
const float Bitcoin = 0.0000021;
const float PesosA = 113.62;
const float PesosC = 499.24;
const float Yenes = 20.10;

int main()
{
    char continuar;
    float quetzales;

    do
    {
        cout << "Escribe la cantidad de Quetzales a convertir: ";
        cin >> quetzales;

        cout << "\t------------------------" << endl;
        cout << "\t       Opciones   " << endl;
        cout << "\t------------------------" << endl;

        cout << "[1] Convertir a USD" << endl;
        cout << "[2] Convertir a BTC" << endl;
        cout << "[3] Convertir a ARS" << endl;
        cout << "[4] Convertir a COP" << endl;
        cout << "[5] Convertir a JPY" << endl;

        int eleccion;
        cin >> eleccion;

        if (eleccion == 1)
        {
            cout << "Son " << quetzales * Dolar << " Dolares." << endl;
        }
        else if (eleccion == 2)
        {
            cout << "Son " << quetzales * Bitcoin << " Bitcoins." << endl;
        }
        else if (eleccion == 3)
        {
            cout << "Son " << quetzales * PesosA << " Pesos Argentinos." << endl;
        }
        else if (eleccion == 4)
        {
            cout << "Son " << quetzales * PesosC << " Pesos Colombianos." << endl;
        }
        else if (eleccion == 5)
        {
            cout << "Son " << quetzales * Yenes << " Yenes." << endl;
        }
        else
        {
            cout << "Opcion invalida." << endl;
        }

        cout << "Desea realizar otra conversion? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');

    cout << "Saliendo del programa..." << endl;

    return 0;
}
