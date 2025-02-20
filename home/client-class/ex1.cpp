#include <iostream>
#include "Cliente.h"

using namespace std;

int main() {

	Cliente c1;
	Cliente c2;
	Cliente c3(13,55);
	Cliente c4(c3);

	c1.printDados();

	c1.setNif(123456789);
	cout << "NOVO NIF: " << c1.getNif() << endl;
	cout << "C4 NIF: " << c4.getNif() << endl;
}
