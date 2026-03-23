#include <iostream>
using namespace std;
int main (){

    int i=1;
    int suma = 0;

    cout << "Ingrese numero Entero (0 para terminar el proceso): ";
    cin >> i;

    while (i != 0){
        suma = suma += i;
        cout << "Ingrese Otro Numero Entero (0 para terminar): ";
        cin >> i;
    }

    cout << "Suma Acumulada: " << suma << endl;

    return 0;
}