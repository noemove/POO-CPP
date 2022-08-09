#include <iostream>
#include <string>

using namespace std;

class Persona {
private:
    string nombre;
    int edad;
public:
    Persona(string nombre, int edad);
    ~Persona();
    void Saludar();
    void SetterNombre(string nombre);
    void SetterEdad(int edad);
};

Persona::Persona(string nombre, int edad){
        this->nombre=nombre;
        this->edad=edad;
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

int main(){
    Persona *p= new Persona("Pedro", 14);
 
    p->SetterNombre("Noe");
    p->SetterEdad(23);

    p->Saludar();
}