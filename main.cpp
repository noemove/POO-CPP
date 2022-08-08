#include <iostream>
#include <string>

using namespace std;


int main(){
    union numero_letra {
        int numero;
        char letra;
    };

    numero_letra x = {'a'};

    cout << "x como un numero : " << x.numero << endl;
    cout << "x como una letra : " << x.letra; 

}