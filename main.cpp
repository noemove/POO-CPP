#include <iostream>
#include <string>

using namespace std;

class Persona {
private:
    string nombre;
    int edad;
public:
    static int numeroPersona;
    Persona(string nombre, int edad);
    ~Persona();
    void Saludar();
    void SetterNombre(string nombre);
    void SetterEdad(int edad);
};

Persona::Persona(string nombre, int edad){
        this->nombre=nombre;
        this->edad=edad;
        numeroPersona+=1;
    }

Persona::~Persona(){
        cout << "desctructor" << endl;
        //se utiliza el destructor 
    }

void Persona::Saludar(){
        cout << nombre << " esta saludando con " << edad << " anios de edad " << endl;
    }

void Persona::SetterNombre(string nombre){
    this->nombre=nombre;
}

void Persona::SetterEdad(int edad){
    this->edad=edad;
}

int Persona::numeroPersona=0;

int main(){
    Persona *p= new Persona("Pedro", 14);
    Persona *p2= new Persona("Pedro", 14);
    Persona *p3= new Persona("Pedro", 14);

    p->SetterNombre("Noe");
    p->SetterEdad(23);

    cout <<endl <<"numero de personas " << Persona::numeroPersona << endl;
    p->Saludar();
}