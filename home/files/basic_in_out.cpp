#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string sourceFile, destinationFile;

    // Pedir ao usuário os nomes dos arquivos
    cout << "Digite o nome do arquivo de origem: ";
    cin >> sourceFile;
    cout << "Digite o nome do arquivo de destino: ";
    cin >> destinationFile;

    // Abrir o arquivo de origem para leitura
    ifstream inFile(sourceFile);
    if (!inFile) {  // Verifica se o arquivo de origem existe
        cerr << "Erro: Não foi possível abrir o arquivo de origem '" << sourceFile << "'." << endl;
        return 1; // Retorna erro
    }

    // Abrir o arquivo de destino para escrita
    ofstream outFile(destinationFile);
    if (!outFile) {  // Verifica se o arquivo de destino pode ser criado
        cerr << "Erro: Não foi possível criar o arquivo de destino '" << destinationFile << "'." << endl;
        return 1;
    }

    // Copiar o conteúdo linha por linha
    string line;
    while (getline(inFile, line)) {  // Lê cada linha do arquivo de origem
        outFile << line << endl;     // Escreve no arquivo de destino
    }

    // Fechar os arquivos
    inFile.close();
    outFile.close();

    cout << "Arquivo copiado com sucesso!" << endl;
    return 0;
}
