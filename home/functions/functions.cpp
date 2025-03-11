#include <iostream>
using namespace std;

// Power function definition
double Power(double n, unsigned int p = 2) {
    double result = 1.0;
    
    // Multiply n by itself (p-1) times
    for (unsigned int i = 0; i < p; i++) {
        result *= n;
    }
    
    return result;
}

int main() {
    double n;
    unsigned int p;

    // Get input from the user
    cout << "Enter a number (n): ";
    cin >> n;

    cout << "Enter the exponent (p, or press 0 to use default): ";
    cin >> p;

    // If the user presses 0, set p to 2 (default behavior)
    if (p == 0) {
        cout << "The result of " << n << " raised to the power of 2 is: " << Power(n) << endl;
    } else {
        cout << "The result of " << n << " raised to the power of " << p << " is: " << Power(n, p) << endl;
    }

    return 0;
}
