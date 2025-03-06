// Using dot operator 
// ex1: conta_victor.balanco;
// ex2: conta_victor.deposito(1000)

// If we have a pointer first need to refrence the pointer then
// use the dot operator 
// Conta *conta_victor = new Conta()
// ex: (*conta_victor).balanco 
// ex: (*conta_victor).deposito(1000) 

// OR

// Usar o membro of pointer opeartor (arrow op.)
// Conta *conta_victor = new Conta()
// ex: conta_victor->balanco 
// ex: conta_victor->deposito(1000) 

// PUBLIC -> ACESSIBLE EVERYWHERE
// PRIVATE -> 
// PROTECTED 



#include <iostream>
#include <string>

using namespace std;

class Player{
public:
    // Atributos
    string name;
    int health;
    int xp;

    // methodos
    void talk(string text_to_say){ cout << name << " says: " <<  text_to_say << endl;};
    bool is_dead();
};

class Account {
public:
    // atributos
    string name;
    double balance;

    // methodos
    bool deposit(double bal){balance +=bal ; cout << "In deposit: " << endl;}
    bool whitdraw(double bal){balance -=bal; cout << "In withdraw: " << endl;}
};



int main(){
    Account conta_victor;
    conta_victor.name = "Conta Victor";
    conta_victor.balance = 5000;

    conta_victor.deposit(1000);
    conta_victor.whitdraw(500);


    Player Victor;
    Victor.name ="Victor";
    Victor.health = 100;
    Victor.xp = 12;
    Victor.talk(" Hello");

    Player *inimigo = new Player;
    (*inimigo).name = "Inimigo";  
    inimigo-> xp = 12;
    inimigo->talk(" I will win you");

 




    return 0;
}