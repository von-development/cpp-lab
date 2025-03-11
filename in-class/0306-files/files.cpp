// AULA 06/03/2025
// FILES

// VICTOR VON SOHSTEN | N.mec 123440
// RODRIGO SILVA      | N.mec 126667


#include <iostream>
#include <string>
#include <fstream>

using namespace std;
// === Resumo ==== 
// a. ifstream fp(nome.txt)
// b. ifstream fp;;
//    fopen(nome.txt)

// string x;
// fp >> x;
// getline(gp, x);

int main(){
    string input, output, x;


    cout << "Entre o nome do arquivo para copiar" << endl;
    cin >> input;
    cout << "Diga o nome do output do arquivoarquivo que voce quer copiar" << endl;
    cin >> output;

    ifstream inp(input);
    ofstream outp(output);

    while (getline(inp, x)){
        outp << x << endl;
    }



    inp.close();
    outp.close();

    


    return 0;

    
}






