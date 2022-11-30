#include <iostream> // Es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida.
using namespace std; //sirve como punto de partida para la ejecución del programa
int main() // sirve como punto de partida para la ejecución del programa
{
	float PBV_x,PBV_s=0,PBV_s1=0,PBV_s5=0; // declaramos las variables que vamos a utilizar con decimales
	int PBV_i=0,PBV_l,PBV_i1=0,PBV_i5=0; // declaramos las variables que vamos a utilizar únicamente enteras.
	cout<<"Ingrese l: ";cin>>PBV_l; // declaramos la variable que en este caso será determinada por el usuario
	do{ // ingresamos a un ciclo do

	cout<<"Ingrese x: ";cin>>PBV_x; // determinamos al usuario que ingrese la variable de x
	PBV_i=PBV_i+1; // hacemos los respectivos cálculos
	PBV_s=PBV_s+PBV_x;
	if(PBV_x==1){ // Condicional dependiente del cálculo anterior
		PBV_i1=PBV_i1+1;
		PBV_s1=PBV_s1+PBV_x;
	}else{ // si la condición anterior no se cumple a partir del cálculo anterior, se hará un cálculo alternativo.

		PBV_i5=PBV_i5+1;
		PBV_s5=PBV_s5+PBV_x;
	}

	}while(PBV_i<PBV_l); // Ciclo Do, se repetirá siempre y cuando i sea mayor a l
	// a continuación arrojamos al usuario los resultados de nuestras operaciones.
	cout<<"La cantidad de monedas es: "<<PBV_i<<endl;
	cout<<"El valor es: "<<PBV_s<<endl;


	cout<<"La cantidad de monedas de 1$ es: "<<PBV_i1<<endl;
	cout<<"El valor es: "<<PBV_s1<<endl;

	cout<<"La cantidad de monedas de 50ctvs es: "<<PBV_i5<<endl;
	cout<<"La cantidad de moneda es: "<<PBV_s5<<endl;
	return 0;
}