#include "iostream"
#include <math.h>

using namespace std;

int main()
{
    float radio,radCuad,area,perimetro;
    string unidad;

    cout << endl << "Ingrese el radio del circulo: \n";
    cin >> radio;
    cout << endl << "¿cual es la unidad de medida? \n";
    cin >> unidad;

    radCuad = pow(radio,2);
    area = M_PI*radCuad;
    perimetro = 2*M_PI*radio;

    cout << "\nEl area del circulo es: " << area << " " << unidad << " cuadrados" << endl;
    cout << "\nEl perimetro del circulo es: " << perimetro << " " << unidad << endl;
    
    return 0;
}