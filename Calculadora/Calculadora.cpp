#include <iostream>

using namespace std;

int main()
{
    int N1, N2;
    cout<<"---------CALCULADORA---------"<<endl;
    cout<<"Ingrese un valor para realizar el calculo +-*/"<<endl;
    cout<<"Primer Valor: ";
    cin>>N1;
    cout<<"Segundo Valor: ";
    cin>>N2;
    cout<<"---------Resultados---------"<<endl;
    cout<<"Suma: "<<N1+N2<<endl;
    cout<<"Resta: "<<N1-N2<<endl;
    cout<<"Multiplicacion: "<<N1*N2<<endl;
    cout<<"Division: "<<N1/N2<<endl;
}
