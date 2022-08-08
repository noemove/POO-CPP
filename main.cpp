#include <iostream>
#include <string>

using namespace std;

class Persona {
public:
    string nombre;
    int edad;
    Persona(string n){
        nombre=n;
    }
    ~Persona(){
        cout << "desctructor" << endl;
        //se utiliza el destructor 
    }
    void Saludar(){
        cout << nombre << " esta saludando" << endl;
    }

};

int main(){
    Persona *p= new Persona("Pedro");
    Persona *p2= new Persona("Maria"); 

    delete p2;

    p->Saludar();
    p2->Saludar(); 
}