#include <iostream>

using namespace std;

// void maxint(int *number[], int size);
//int maxint(int *number, int size); // Correct function prototype



int main(){

    int *number = nullptr;
    int size;

    cout << "Enter the quantity of number you want to add" << endl;
    cin >> size;

    number = new int[size];

    for(int i = 0; i < size; i++){
        cout << "Enter the number #" << i+1 <<endl;
        cin >> number[i];
    }

    maxint(&number, size);

    delete[] number;

    return 0;
}

void maxint(int *number[], int size){
    int max;

    number[max] = number[0];
    for (int i; i <size; i++){
        if(number[i] > number[max]){
            number[max] = number[i];
        }
    }
    cout << number[max] << endl;
    cout << *number[max] << endl;

}