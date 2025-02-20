#include <iostream>

class Student {
    public:
    std::string name;
    int age;
    double grade;
    

    Student(std::string name, int age, double grade){
        this-> name = name;
        this-> age = age;
        this-> grade = grade;

    }
};

int main(){
    Student student1("Victor", 27, 13.45);

    std::cout << student1.name << std::endl;
    std::cout << student1.age << std::endl;
    std::cout << student1.grade << std::endl;



    return 0;
}