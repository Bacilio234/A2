#include <iostream> // Es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida.
using namespace std; //sirve como punto de partida para la ejecución del programa
int main() // sirve como punto de partida para la ejecución del programa
{
    float PBV_x, PBV_s = 0, PBV_vb, PBV_piva = 12, PBV_viva, PBV_pdesc = 10, PBV_vdesc, PBV_vn;  // determinamos las variables que vamos a utilizar en este caso números con decimales.
    int PBV_i = 0, PBV_l; // determinamos las variables que vamos a utilizar en este caso números enteros 
    cout << "Ingrese l: "; // determinamos al usuario que inicialice la variable 
    cin >> PBV_l; // Le regresamos la variable ingresada al usuario la cual es la que ingresó en este caso.
    do // inicio del ciclo do.
    {
        cout << "Ingrese x: "; // determinamos al usuario que inicialice la variable 
        cin >> PBV_x;  // Le regresamos la variable ingresada al usuario la cual es la que ingresó en este caso.
        PBV_i = PBV_i + 1;  // Inicio de los cálculos dependiendo de la condicional del do.
        PBV_s = PBV_s + PBV_x;
    } while (PBV_i < PBV_l); // Condición que hará que este bucle se repita la cantidad de veces que se haya establecido.
    PBV_vb = PBV_s; // Realizamos las  operaciones adicionales para obtener un resultado.
    PBV_viva = PBV_vb * PBV_piva / 100;
    PBV_vdesc = PBV_vb * PBV_pdesc / 100;
    PBV_vn = PBV_vb + PBV_viva - PBV_vdesc;
    // Imprimimos al usuario el resultado de las operaciones correspondientes.
    cout << "El valor a pagar es de: " << PBV_vn << endl;
    return 0;
}