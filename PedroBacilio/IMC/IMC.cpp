#include <iostream> // Es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida.
using namespace std; //sirve como punto de partida para la ejecución del programa
int main() // sirve como punto de partida para la ejecución del programa
{
	float PBV_imc,PBV_peso,PBV_altura; // determinamos las variables que vamos a utilizar en este caso números con decimales.
	cout<<"Ingrese el peso (kg): ";cin>>PBV_peso; // determinamos al usuario que inicialice la variable de peso.
	cout<<"Ingrese la altura (metros): ";cin>>PBV_altura; // determinamos al usuario que inicialice la variable de altura.
	PBV_imc=PBV_peso/(PBV_altura*PBV_altura); // Realizamos el respectivo cálculo para obtener IMC.
	// a continuacion, depende del resultado que obtengamos en el IMC
	// repartimos diferentes resultados según las siguientes condiciones	
	if(PBV_imc<18.5){
		cout<<"Usted tiene bajo peso"<<endl;
	}
	if(PBV_imc>=18.5 && PBV_imc<24.9){
		cout<<"Usted tiene peso normal"<<endl;
	}

	if(PBV_imc>=25 && PBV_imc<26.9){
		cout<<"Usted tiene sobrepeso grado I"<<endl;
	}

	if(PBV_imc>=27 && PBV_imc<29.9){
		cout<<"Usted tiene sobrepeso grado II"<<endl;
	}

	if(PBV_imc>=30 && PBV_imc<34.9){
		cout<<"Usted tiene obesidad tipo I"<<endl;
	}

	if(PBV_imc>=35 && PBV_imc<39.9){
		cout<<"Usted tiene obesidad tipo II"<<endl;
	}

	if(PBV_imc>=40 && PBV_imc<49.9){
		cout<<"Usted tiene obesidad tipo III (mórbida)"<<endl;
	}

	if(PBV_imc>=50){
		cout<<"Usted tiene obesidad tipo IV (extrema)"<<endl;
	}
	return 0;
}