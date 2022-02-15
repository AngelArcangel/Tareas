#include <iostream>

using namespace std;

int operacionSuma(int V1, int V2)
{
    return V1+V2;
}
int operacionResta(int V1, int V2)
{
    return V1-V2;
}
float operacionDivision(float V1, float V2)
{
    return V1/V2;
}
int operacionMultiplicacion(int V1, int V2)
{
    return V1*V2;
}

int main()
{
    int V1,V2;

    cout<<"-------CALCULADORA CON FUNCIONES"<<endl;
    cout<<"Ingrese valor: ";
    cin>>V1;
    cout<<"Ingrese valor: ";
    cin>>V2;

    int suma=(operacionSuma(V1,V2));
    int resta=(operacionResta(V1,V2));
    int multi=(operacionMultiplicacion(V1,V2));
    float division=(operacionDivision(V1,V2));

    cout<<"Suma: "<<suma<<endl;
    cout<<"Resta: "<<resta<<endl;
    cout<<"Divicion: "<<division<<endl;
    cout<<"Multiplicacion: "<<multi<<endl;

    return 0;
}
