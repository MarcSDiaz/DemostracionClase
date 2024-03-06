#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;
//Creamos una clase, en este caso Animal
class Animal{
    //El encapsulamiento de nombre y edad, el cual son los atributos
    private:
        string nombre;
        string origen;
    public:
    //Constructor y los metodos
        Animal(string,string);
        void hablar();
};
//Creamos otra clase, herdando los datos de la clase Animal
class Cachorro : public Animal{
    private:
        int edad;
    public:
    //Constructores y metodos
        Cachorro(string,string,int);
        void presentarse();
};
//Inicializamos el constructor, con sus respectivas variables
Animal::Animal(string nombre1, string origen1){
    nombre = nombre1;
    origen = origen1;
}
//Inicializamos el constructor de la clase persona
Cachorro::Cachorro(string nombre1,string origen1,int edad1) : Animal(nombre1,origen1){
    edad = edad1;
}
//Incializamos el metodo hablar
void Animal::hablar(){
    cout<<"Soy un Animal, me llamo "<<nombre<<", soy de "<<origen;
}
//Inicializar el motodo presentarse
void Cachorro::presentarse(){
    hablar();
    cout<<" y tengo "<<edad<<" anios"<<endl;
}
int main()
{
    Animal leon("Alex","Africa");
    Cachorro Perrito("Yumi","Canada",5);
    leon.hablar();
    cout<<endl;
    Perrito.presentarse();
    system("pause");
    return 0;
};