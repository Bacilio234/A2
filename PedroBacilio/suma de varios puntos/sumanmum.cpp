#include <iostream> // Es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida.
using namespace std; //sirve como punto de partida para la ejecución del programa
int main() // sirve como punto de partida para la ejecución del programa 
{
    float PBV_x,PBV_s=0.0; // determinamos las variables que vamos a utilizar en este caso números con decimales.
    int PBV_i=0, PBV_l;  // determinamos las variables que vamos  a utilizar en este caso números enteros 
    cout<<"Ingrese el valor de PBV_l: ";  // determinamos al usuario que inicialice la variable 
    cin>>PBV_l;
    do{ // incio del bucle Do.
        cout<<"Ingrese el valor de PBV_x: ";  // determinamos al usuario que inicialice la variable 
        cin>>PBV_x;
        PBV_i=PBV_i+1; // Realizamos las respectivas operaciones para obtener nuestro resultado
        PBV_s=PBV_s+PBV_x;
    }while(PBV_i<PBV_l); // Condicional que hará que el bucle Do se repita la cantidad de veces que sean necesarias.
    // Imprimimos por consola el resultado de nuestras operaciones 
    cout <<"La suma de los numeros fue: "<<PBV_s<<endl;
    return 0;

}