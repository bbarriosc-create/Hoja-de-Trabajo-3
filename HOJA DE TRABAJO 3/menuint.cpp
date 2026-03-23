#include <iostream>
using namespace std;

int main (){

    int numeros1_5 = 1;
    int numeros_pares = 2;
    int menu;
    int salir = 3;

    do {
        cout << endl;
        cout << "MENU" << endl;
        cout << "1. Mostrar numeros del 1 al 5" << endl;
        cout << "2. Mostrar numeros pares del 1 al 10" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese Numero del 1 al 3: ";
        cin >> menu;

        if (menu == 1) {
            numeros1_5 = 1;

            do {
                cout << numeros1_5 << endl;
                numeros1_5++;
            } while (numeros1_5 <= 5);
        }

        if (menu == 2) {
            numeros_pares = 2;

            do {
                cout << numeros_pares << endl;
                numeros_pares += 2;
            } while (numeros_pares <= 10);
        }

        if (menu == 3) {
            cout << "Salir" << endl;
        }

    } while (menu != salir);

    cout << "Salir" << endl;

    return 0;
}