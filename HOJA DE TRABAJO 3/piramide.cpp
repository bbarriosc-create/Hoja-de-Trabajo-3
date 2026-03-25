#include <iostream>
using namespace std;
int main () {

    int n;
    int fila =1;
   

    cout << "Ingrese Numero: ";
    cin >> n;
    
    while (fila <= n){

         int contador =1;

    while (contador <= fila){
        cout << "*" ;
        contador ++;       
        
    }

    cout << endl;
    fila ++;
    
    }
    return 0;
}