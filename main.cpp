#include <iostream>
#include <string>

using namespace std;

class Persona {
public:
    string nombre= "Diana";
    int edad= 22;
    void Saludar(){
        cout << nombre << " esta saludando" << endl;
    }

};

int main(){
    Persona *p= new Persona();
    Persona *p2= new Persona();

    p2->nombre = "Noe"; 

    p->Saludar();
    p2->Saludar(); 
}