#include <iostream>
using namespace std;

//Crea una estructura llamada Empleado que contenga los siguientes campos: nombre (string), id (int), salario (float). Luego, declara un arreglo de 5 empleados.
//Escribe  un programa que permita al usuario ingresar los datos de cada empleado y luego muestre la informacion del empleado con el salario más alto.

struct Empleado {
    string nombre;
    int id;
    float salario;
};

int main() {
    Empleado empleados[5];

	cout << "*** Ingresar datos de 5 empleados *** " << endl;
	cout << " " << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Ingrese el nombre del empleado " << i + 1 << ": ";
        cin.ignore(); 
        getline(cin, empleados[i].nombre);
        cout << "Ingrese el ID del empleado " << i + 1 << ": ";
        cin >> empleados[i].id;
        cout << "Ingrese el salario del empleado " << i + 1 << ": ";
        cin >> empleados[i].salario;
    }

    int indiceMayorSalario = 0;
    for (int i = 1; i < 5; i++) {
        if (empleados[i].salario > empleados[indiceMayorSalario].salario) {
            indiceMayorSalario = i;
        }
    }

    cout << "\nEl empleado con el salario mas alto es:\n";
    cout << "Nombre: " << empleados[indiceMayorSalario].nombre << "\n";
    cout << "ID: " << empleados[indiceMayorSalario].id << "\n";
    cout << "Salario: " << empleados[indiceMayorSalario].salario << "\n";

    return 0;
}
