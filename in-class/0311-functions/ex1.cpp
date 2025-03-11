#include <iostream>
#include <math.h>


double Power(double n, unsigned int p=2){
    double result = 1;

    for (int i=0; i < p; i++){
        result *= n;
    }
    return result;
}

short Power(short n, unsigned int p=2){
    short result = 1;

    for (int i=0; i < p; i++){
        result *= n;
    }
    return result;
}
int Power(int n, unsigned int p=2){
    int result = 1;

    for (int i=0; i < p; i++){
        result *= n;
    }
    return result;
}
float Power(float n, unsigned int p=2){
    float result = 1;

    for (int i=0; i < p; i++){
        result *= n;
    }
    return result;
}


int main(){
    double n_double = 4.5325;
    short n_short = 30;
    int n_int = 40;
    float n_float = 3.14;

    // std::cout << "Entre o numero que voce quer exponencialiazar" << std::endl;
    // std::cin >> n;
    // std::cout << "O valor de exponencializado" 
    // << n << "e de " << Power(n) << std::endl;
    std::cout << "double: " << Power(n_double) << std::endl;
    std::cout << "short: " << Power(n_short) << std::endl;
    std::cout << "int: " << Power(n_int) << std::endl;
    std::cout << "float " << Power(n_float) << std::endl;



    return 0;
}