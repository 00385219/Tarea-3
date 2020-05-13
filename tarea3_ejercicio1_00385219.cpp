#include "iostream"

using namespace std;

int main()
{
    float num1,num2,num3,prom;

    cout << endl << "Ingrese el primer numero: \n";
    cin >> num1;
    cout << "\nIngrese el segundo numero: \n";
    cin >> num2;
    cout << "\nIngrese el tercer numero: \n";
    cin >> num3;

    prom = (num1+num2+num3)/3;

    cout << "\nEl promedio de los 3 numeros es: " << prom << endl;
    
    return 0;
}