#include <iostream>

using namespace std;

int main()
{
    int F,C,P,PA,D;
    cout << "-----Ingrese sus notas-----" << endl;
    cout << "Fisica I: ";
    cin>>F;
    cout << "Calculo: ";
    cin>>C;
    cout << "Programacion I: ";
    cin>>P;
    cout << "Proceso Administrativo: ";
    cin>>PA;
    cout << "Derecho Informatico: ";
    cin>>D;

    cout<<"--------RESULTADOS--------"<<endl;

    if(F>=90){
        cout<<"Fisica I ("<<F<<") EXCELENTE!!!!"<<endl;
    }
    else if(F>=80 and F<90){
        cout<<"Fisica I ("<<F<<") BIEN!!!!"<<endl;
    }
    else if(F>=70 and F<80){
        cout<<"Fisica I ("<<F<<") SIGUE ASI! :3"<<endl;
    }
    else{
        cout<<"Fisica I ("<<F<<") NECESITAS MEJORAR :D"<<endl;
    }
    //CALCULO
    if(C>=90){
        cout<<"Calculo ("<<C<<") EXCELENTE!!!!"<<endl;
    }
    else if(C>=80 and C<90){
        cout<<"Calculo ("<<C<<") BIEN!!!!"<<endl;
    }
    else if(C>=70 and C<80){
        cout<<"Calculo ("<<C<<") SIGUE ASI! :3"<<endl;
    }
    else{
        cout<<"Calculo ("<<C<<") NECESITAS MEJORAR :D"<<endl;
    }
    //PROGRAMACION
    if(P>=90){
        cout<<"Programacion ("<<P<<") EXCELENTE!!!!"<<endl;
    }
    else if(P>=80 and P<90){
        cout<<"Programacion ("<<P<<") BIEN!!!!"<<endl;
    }
    else if(P>=70 and P<80){
        cout<<"Programacion ("<<P<<") SIGUE ASI! :3"<<endl;
    }
    else{
        cout<<"Programacion ("<<P<<") NECESITAS MEJORAR :D"<<endl;
    }
    //Proceso Administrativo
    if(PA>=90){
        cout<<"Proceso Administrativo ("<<PA<<") EXCELENTE!!!!"<<endl;
    }
    else if(PA>=80 and PA<90){
        cout<<"Proceso Administrativo ("<<PA<<") BIEN!!!!"<<endl;
    }
    else if(PA>=70 and PA<80){
        cout<<"Proceso Administrativo ("<<PA<<") SIGUE ASI! :3"<<endl;
    }
    else{
        cout<<"Proceso Administrativo ("<<PA<<") NECESITAS MEJORAR :D"<<endl;
    }
    //DERECHO INFORMATICO
    if(D>=90){
        cout<<"DERECHO INFORMATICO ("<<D<<") EXCELENTE!!!!"<<endl;
    }
    else if(D>=80 and D<90){
        cout<<"DERECHO INFORMATICO ("<<D<<") BIEN!!!!"<<endl;
    }
    else if(D>=70 and D<80){
        cout<<"DERECHO INFORMATICO ("<<D<<") SIGUE ASI! :3"<<endl;
    }
    else{
        cout<<"DERECHO INFORMATICO ("<<D<<") NECESITAS MEJORAR :D"<<endl;
    }
    return 0;
}
