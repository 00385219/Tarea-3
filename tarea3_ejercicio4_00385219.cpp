#include "iostream"

using namespace std;

int main()
{
    string nombre;
    float precio,cantidad,total;

    cout << endl << "Ingrese el nombre del producto: \n";
    cin >> nombre;
    cout << "\nIngrese el precio del producto: \n";
    cin >> precio;


    
    if (precio<0)
    {
        cout << "\nInvalido:\n";
        cout << "Usted ingreso un numero negativo en el precio\n";
        cout << "Por tal motivo no se puede continuar, intente nuevamente.\n";
    }
    else
    {
        cout << "\nIngrese la cantidad comprada: \n";
        cin >> cantidad;


        if (cantidad<0)
        {
            cout << "\nInvalido:\n";
            cout << "Usted ingreso un numero negativo en la cantidad\n";
            cout << "Por tal motivo no se puede continuar, intente nuevamente.\n";
        }
        else
        {

            if (cantidad==0)
            {
                
                cout << "Usted ingreso " << cantidad <<endl;
                cout << "Lo que significa que no compro nada\n";
            }
            else
            {
                total = precio * cantidad;

                cout << "\nUsted la cantidad de " << cantidad << " de " << nombre;
                cout << "\nEl total gastado es: $" << total << endl;
            }
            
        }
        

    }
    
}