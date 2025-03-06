#include <iostream>
#include <string>

using namespace std;

int main(){
    string name;
    

    cout << "Digite seu nome:  " << endl;
    // cin >> name
    getline(cin, name);


    cout << name  << endl;
    // cout << name.size()  << endl;
    // cout << name.at(3)  << endl;
    name.push_back('x');
    cout << name << endl;
    name.pop_back();
    cout << name << endl;
    

    return 0;


}
