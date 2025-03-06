#include <iostream>

using namespace std;

int maxint(int *array, int size){
    
    int max = 0;

    for (int i; i < size; i++){
        if(array[i] > array[max] ){
            array[max] = array[i];
        }
    }

    cout << "O numero maximo e:  " << array[max] << endl;
    cout << "O index e " << max << endl;

    return 0;

};


int main(){
    int *array = nullptr;

    int size;

    cout << "Entre um numero: " << endl;
    cin >> size; 
    cout << "Voce escolher"  << size << "para ordenar!"  << endl;

    maxint(array, size);



    return 0;
}