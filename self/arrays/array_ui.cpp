#include <iostream>

using namespace std;

int main(){

    string peoples[5]; // = {"Victor", "von", "Sohsten"};
    int size = sizeof(peoples)/sizeof(peoples[0]);
    string temp;

    for(int i = 0; i < size; i++){
        cout << "Enter a name " << endl;
        getline(cin, temp);
        if(temp == "q"){
            break;
        }
        else{
            peoples[i] = temp;
        }
    }

    cout << "This is the names you entered! " << endl;

    for(int i = 0; !peoples[i].empty(); i++){
        cout << peoples[i] << endl;
    }




   

    return 0;
}