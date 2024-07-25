#include <iostream>
#include <string> 
using namespace std;

class Futbolista {
private:
    string equipo;
    string nombre;
    int edad;
    int valor;
    int goles;
public:
    Futbolista(string, string, int, int, int);

    void datos();
    void record();
};

Futbolista::Futbolista(string _equipo, string _nombre, int _edad, int _valor, int _goles){
    equipo = _equipo;
    nombre = _nombre;
    edad = _edad;
    valor = _valor;
    goles = _goles;    
};

void Futbolista::datos(){
    cout << "Nombre del jugador: "<< nombre << endl;
    cout << "Equipo en el que juega : "<< equipo << endl;
    cout << "Edad del jugador: "<< edad << endl;
    cout << "Valor en el mercado: "<< valor << " millones de dolares" << endl;
};

void Futbolista::record(){
    cout << nombre << " tiene el record de ser el maximo goleador con su seleccion con " << goles << " goles " << endl; 
};

int main (){
    Futbolista f1("Barcelona", "Lionel Messi", 37 , 10, 70);
    Futbolista f2("Real Madrid", "Cristiano Ronaldo", 39, 15, 130);

    f1.datos();
    cout << endl;
    f1.record();
    cout << endl;
    f2.datos();
    cout << endl;
    f2.record();
};