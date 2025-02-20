#include <iostream>


class Human{
    public:
        std::string name = "Victor";
        std:: string occupation = "Engenheiro";
        int age = 27;

        void eat(){
            std:: cout << "This person is eating \n";
        }
        void drink(){
            std:: cout << "This person is drinking \n";
        }
        void sleep(){
            std:: cout << "This person is sleeping \n";
        }
};

class Car{
    public: 
    std::string make;
    std::string model;
    int year;
    std::string color;

    void accelerate(){
        std::cout <<"You stared to accelerate \n";
    }
    void brake(){
        std::cout << "You step on breaks \n";
    }

};

int main(){

    Human human1;
    Human human2;

    // human1.name = "Victor";
    // human1.occupation = "Engenheiro";
    // human1.age = 27;

    // human2.name = "Fernando";
    // human2.occupation = "Professor";
    // human2.age = 50;

    std:: cout << human1.name << " tem " << human1.age << " anos de idade e " << human1.occupation <<std::endl;


    human1.eat();
    human1.drink();
    human1.sleep();

    Car car1;
    car1.make = "Tesla";
    car1.model = "F800";
    car1.year = 2040;
    car1.color = "Blue";

    std::cout << car1.make << std::endl;
    std::cout << car1.model << std::endl;
    std::cout << car1.year << std::endl;
    std::cout << car1.color << std::endl;

    car1.accelerate();
    car1.brake();



    // Object = A collection of attributes and methods
    //      they can have charactersitic and could pefrom actions
    //      Can be yse to mmimic real worl items (ex. Phone, book )
    //      Acts as a blueprint



    return 0;
}