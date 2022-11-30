#include <iostream> // Es la biblioteca estándar en C++ para poder tener acceso a los dispositivos estándar de entrada y/o salida.
using namespace std; //sirve como punto de partida para la ejecución del programa
int main() // sirve como punto de partida para la ejecución del programa
{
    int PBV_aa, PBV_ma, PBV_da, PBV_an, PBV_mn, PBV_dn, PBV_a, PBV_m, PBV_d; // declaramos las variables que vamos a utilizar.. en este caso números enteros
    cout << "Ingrese la fecha actual Año-Mes-Dia :"; // enviamos un texto de salida que indique al usuario un formato a enviarnos
    cin >> PBV_aa >> PBV_ma >> PBV_da; // enviamos las variables de entrada de texto a través del teclado para recibir los datos que nos envíe el usuario
    cout << "Ingrese la fecha de nacimiento Año-Mes-Dia : "; // enviamos texto de salida indicando al usuario formato a enviarnos.
    cin >> PBV_an >> PBV_mn >> PBV_dn;// enviamos las variables de entrada de texto a través del teclado para recibir los datos que nos envíe el usuario

    if (PBV_da > PBV_dn) // Condiciónal, verificamos si el día de la fecha de nacimiento es iguala al día actual
    {

        PBV_d = PBV_da - PBV_dn; // realizamos la respectiva operación para el cálculo
    }
    else // en caso de que no se cumpla la condición anterior nos saltamos y realizamos un cálculo alternativo.
    {
        // realizamos la respectiva operación para el cálculo
        PBV_da = PBV_da + 30;
        PBV_ma = PBV_ma - 1;
        PBV_d = PBV_da - PBV_dn;
    }
    // Condicional. verificamos si el Mes actual es mayor que el mes de nacimiento.
    if (PBV_ma > PBV_mn)
    {

        PBV_m = PBV_ma - PBV_mn; // realizamos la respectiva operación para el cálculo
    }
    else // en caso de que no se cumpla la condición anterior nos saltamos y realizamos un cálculo alternativo.
    {
         // realizamos la respectiva operación para el cálculo 
        PBV_ma = PBV_ma + 12;
        PBV_aa = PBV_aa - 1;
        PBV_m = PBV_ma - PBV_mn;
    }
    // Finalizamos con el cálculo usando la operación entre el año actual y el de nacimiento
    PBV_a = PBV_aa - PBV_an;
    // arrojamos el resultado de nuestra operación.
    cout << "Usted tiene " << PBV_a << " años, " << PBV_m << " meses," << PBV_d << " dias" << endl;
    return 0;
}