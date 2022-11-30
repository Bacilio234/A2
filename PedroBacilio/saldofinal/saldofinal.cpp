#include <iostream> // Es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida.
using namespace std; //sirve como punto de partida para la ejecución del programa
int main() // sirve como punto de partida para la ejecución del programa
{
	float PBV_x,PBV_s=0; // determinamos las variables que vamos a utilizar en este caso números con decimales.
	int PBV_i=0,PBV_l; // determinamos las variables que vamos  a utilizar en este caso números enteros 
	cout<<"Ingrese cantidad de egresos  ";cin>>PBV_l; // determinamos al usuario que inicialice la variable 
	cout<<"Ingrese saldo inicial : ";cin>>PBV_s; // determinamos al usuario que inicialice la variable 
	
	do{ // inicio del ciclo Do.
	cout<<"Ingrese egreso(x): ";cin>>PBV_x; // determinamos al usuario que inicialice la variable 
	PBV_i=PBV_i+1; //  Realizamos las respectivas operaciones..
	PBV_s=PBV_s-PBV_x;

	}while(PBV_i<PBV_l); // Condicional que hará que el do se repita en bucle la cantidad de veces que sea necesaria.
	// Imprimimos en consola al usuario el resultado de las operaciones respectivas.
	cout<<"El saldo final es: "<<PBV_s<<endl;
	return 0;
}