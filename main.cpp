#include <iostream>
#include <string>

using namespace std;

struct Persona {
    string nombre;
    int edad;
};

int main(){
    Persona *p = new Persona();
    p->nombre = "Noe";
    p->edad = 23; 
    cout << p->nombre << endl; 
    cout << p->edad;  
}