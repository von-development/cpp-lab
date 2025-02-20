#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player{
public:
    // attributes 
    string name;
    int health{100};
    double xp{20};
    // methods

    void talk(string text_to_say) {cout << name << " talking: "
    << text_to_say << endl; };
    bool is_dead(string);
  
};

class Account {
public:
    string name {"Account"}; // Intializing the attribute value 
    double balance {0.0}; // **

    //methodos
    bool deposit(double bal);
    bool withdraw(double bal);
};

int main(){
    
    Player one;
    Player two;
    // FIRST PART
    // Player players[] {one, two}; // ARRAY EXAMPLE

    // vector <Player> player_vec{one};
    // player_vec.push_back(two);

    // Player *enemy{nullptr};
    // enemy = new Player;

    // SECOND PART
    one.name = "Victor";
    one.health = 100;
    one.xp = 12;

    one.talk(" Hello");

    // And with a pointer? We need to defereence de pointer
    // to use it as a object
    Player *enemy = new Player;
    (*enemy).name = "Enemy";
    // With pointer example
    (*enemy).health = 1000;

    // with arrow 
    enemy -> xp = 15;

    enemy->talk("I will destroy you");

    // continue later

    // https://www.udemy.com/course/beginning-c-plus-plus-programming/learn/lecture/9535572#overview









    return 0;
}
