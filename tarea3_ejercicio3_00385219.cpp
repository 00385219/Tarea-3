#include "iostream"
#include <math.h>

using namespace std;

int main()
{
    double a,b,bcuad,bneg,c,opraiz,raiz,x1,x2;

    cout << endl << "Ingrese el valor de A: \n";
    cin >> a;
    cout << "\nIngrese el valor de B: \n";
    cin >> b;
    cout << "\nIngrese el valor de C: \n";
    cin >> c;

    bcuad = pow(b,2);
    bneg = b*-1;
    opraiz = bcuad-4*a*c;
     
       
    if (opraiz<0)
    {
        cout << "\nIndefinido:\n";
        cout << "El valor obtenido en la operacion dentro de la raiz (b al cuadrado menos 4ac) es negativo\n";
        cout << "Por tal motivo no se puede operar\n";
    }
    else
    {
        raiz = sqrt(opraiz);
        x1 = (bneg+raiz)/(2*a);
        x2 = (bneg-raiz)/(2*a);
        cout << "\n Valor de X1 es: "<< x1;
        cout << "\n Valor de X2 es: "<< x2;
    }
    
    return 0;


}
