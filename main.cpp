#include <iostream>
#include <string>

using namespace std;

class Persona {
private:
    string nombre;
    int edad;
public:
    Persona(string n);
    ~Persona();
    void Saludar();
};

Persona::Persona(string n){
        nombre=n;
    }

Persona::~Persona(){
        cout << "desctructor" << endl;
        //se utiliza el destructor 
    }

void Persona::Saludar(){
        cout << nombre << " esta saludando" << endl;
    }

int main(){
    Persona *p= new Persona("Pedro");
    Persona *p2= new Persona("Maria"); 

    p->Saludar();
    p2->Saludar(); 
}