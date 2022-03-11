#include <iostream>

using namespace std;

class Persona
{
public:
    int iEdad, itelefono;
    string iNombre, iDireccion, iID, icorreo;

    Persona(string Nombre, string Direccion, string ID, string correo, int Edad, int telefono)
    {
        iNombre = Nombre;
        iID = ID;
        iDireccion = Direccion;
        iEdad = Edad;
        icorreo = correo;
        itelefono = telefono;
    }
private:

};

class Empleado: public Persona
{
public:
    Empleado(string Nombre, string Direccion, string ID, string correo, int Edad, int telefono):Persona(Nombre,Direccion,ID,correo,Edad,telefono)
    {
        iNombre = Nombre;
        iID = ID;
        iDireccion = Direccion;
        iEdad = Edad;
        icorreo = correo;
        itelefono = telefono;
    }
    void subClase()
    {
        cout<<"Esta en la SubClase Empleado :v "<<endl;
        cout<<"Nombre: "<<iNombre<<endl;
        cout<<"Edad: "<<iEdad<<endl;
        cout<<"Direccion: "<<iDireccion<<endl;
        cout<<"Telefono: "<<itelefono<<endl;
        cout<<"Correo: "<<icorreo<<endl;
    }
private:
};

int main()
{
    Empleado Angel("Angel","Su Casa","654A98DD","agustinhernandezleo@gmail.com",19,98765428);
    Angel.subClase();
    return 0;
}
