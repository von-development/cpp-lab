#include <iostream>
#include <iomanip>

using namespace std;

// showpoint
// left, right
// setw


int main(){

    double pi = 3.1415933654;

    // SETPRESION

    cout << setprecision(1) << pi << endl;
    cout << setprecision(2) << pi << endl;
    cout << setprecision(3) << pi << endl; // fomaring -> variable -> end

    //FIXED -> Because the MSN can variable
    cout << fixed << setprecision(2) << pi << endl;


    // SHOWPOINT
    double x = 5;
    double y = 234;

    cout << showpoint << x << endl; // DECIMALS 
    cout << showpoint << setprecision(3) << x << endl;

    cout << "Today is a good day" << 4932 << endl;
    cout << setw(40) << "Today is a good day" << 4932 << endl;
    cout << setw(40) << "Today is a good day" << setw(5) << 4932 << endl;


    // left and right

    cout << left << setw(10) << "Hello" << setw(20) << 2313131313 << endl;
    cout << right << setw(10) << "Hello" << setw(20) << 2313131313 << endl;

    // * NOTES *
    // SET AND AND FORGET
    // fixed, showpoint, left, right
    //
    // setw -> Everytime w

    // Pratical example TABLE

    cout << left << setw(20) << "Name 1" << "| " << setw(10) 
    << setprecision(2) << 1.7 << "| " <<setw(10) << "Country 1" << endl 
    << setw(20) << "Name 2" << "| " << setw(10) 
    << setprecision(2) << 1.795 << "| " <<setw(15) << "Country 2"
    << endl; 






    return 0;
}