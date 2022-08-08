#include <iostream>
#include <string>

using namespace std;


int main(){
    union numero_letra {
        int numero;
        char letra;
    };

    numero_letra x = {'a'};

    cout << "x como un numero : " << (char) x.numero << endl;
    cout << "x como una letra : " << x.letra << endl; 

    enum dias_semana {lunes = 'l', martes= 'm', miercoles= 'y'};
    dias_semana dia= martes;

    cout << dia;

}