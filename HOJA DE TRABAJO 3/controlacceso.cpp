#include <iostream>
using namespace std;
int main (){

int contraseña = 1108;
int i;
int intentos_fallidos=0;

cout << "Ingrese Contrasena: "; 
cin >> i;

while (i != contraseña && intentos_fallidos < 2){
    i != contraseña;
    cout << "Contrasena Incorrecta" << endl;
    intentos_fallidos ++;
    

    cout << "Ingrese Contrasena: ";
    cin >> i;
    contraseña == 1108;  
    
}

if (i == contraseña){
cout << "Bienvenido" << endl;
}

else {
    cout << "Acceso Denegado" << endl;
}
    return 0;
}