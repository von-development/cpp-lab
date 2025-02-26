#include <iostream>



int main(){

    // DYNAMIC MEMORY = IS MEMORY THAT IS ALLOCATED AFTER THE
    // PROGRAM IS COMPILED AND RUNNING 
    // USE THE NEW OPERATOR TO ALLOCATE MEMORY 
    // IN THE HEAP RATHER THAN THE STACK 

    // USEFULL WHEN WE DONT NOW HOW MUCH MEMORY
    // WE WILL NEED

    int *pNum = NULL;

    pNum = new int;

    *pNum = 27;

    std::cout << " Adress: " << pNum << std::endl;
    std::cout << " value: " << *pNum << std::endl;

    delete pNum;


    return 0;
}