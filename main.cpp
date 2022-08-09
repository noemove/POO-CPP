#include <iostream>
#include <string>

using namespace std;

class Animal {
    protected:
        static int numeroAnimales;
        string alimento;
    public:
        Animal();
        ~Animal();
        static int obtenerNumeroAnimales();
        string obtenerAlimento() {
            return alimento;
        }
        void comer() {
            cout << "Este animal está comiendo " << alimento << "... ñom ñom" << endl;
        }
};

int Animal::numeroAnimales = 0;

Animal::Animal() {
    cout << "Creando nuevo animal..." << endl;
    numeroAnimales += 1;
}

Animal::~Animal() {
    cout << "Borrando animal..." << endl;
    numeroAnimales -= 1;
}

int Animal::obtenerNumeroAnimales() {
    return numeroAnimales;
}

class Herviboro : public Animal {
    public:
        Herviboro() : Animal() {
            this->alimento = "plantas";
        }
        void pastar() {
            cout << "Este animal está pastando..." << endl;
        }
};

class Carnivoro : public Animal {
    public:
        Carnivoro() : Animal() {
            this->alimento = "carne";
        }
        void cazar() {
            cout << "Este animal está cazando..." << endl;
        }
};

class Omnivoro : public Herviboro, public Carnivoro{
public:
    Omnivoro(): Herviboro(), Carnivoro(){}
    void comer(){
        cout<< "Este animal come lo que sea..." << endl;
    }
};

int main() {
    Animal *a = new Animal();
    Herviboro *h = new Herviboro();
    Carnivoro *c = new Carnivoro();
    Omnivoro *o =new Omnivoro();

    cout << "Numero de animales " << Animal::obtenerNumeroAnimales() << endl;
    a->comer();  

    h->pastar();
    h->comer();

    c->cazar();
    c->comer();

    cout<< "Omnivoro: ";
    o->Herviboro::comer();
    o->comer(); 

    delete a;
    cout << "Numero de animales " << Animal::obtenerNumeroAnimales() << endl;    
}