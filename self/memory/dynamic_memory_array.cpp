#include <iostream>



int main(){

    char *pGrades = NULL;
    int size;
    

    std::cout << " How many grades to enter in ?" << std::endl;
    std::cin >> size;



    

    pGrades = new char[size];

    for(int i = 0; i < size; i++){
        std::cout << "Enter grade #" << i + 1 << ": " << std::endl;
        std::cin >> pGrades[i];
    }
    std::cout << "Your grades were: " << std::endl;

    for(int i = 0; i<size; i++){
        std::cout << pGrades[i] << std::endl;
        
    }

    delete[] pGrades;


    return 0;
}