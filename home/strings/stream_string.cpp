#include <iostream>
#include <sstream>
#include <string>
#include <cctype>

using namespace std;

// Função para contar palavras em um parágrafo
int count_words(const string &paragraph) {
    int count = 0;
    istringstream stream(paragraph);  // Transforma a string em um fluxo de palavras
    string word;

    while (stream >> word) {  // Lê cada palavra separada por espaço ou pontuação
        count++;
    }
    return count;
}

// Função para contar ocorrências exatas da palavra-chave
int count_keyword_occurrences(const string &paragraph, const string &keyword) {
    int count = 0;
    istringstream stream(paragraph); // Transforma a string em um fluxo de palavras
    string word;

    while (stream >> word) {  // Lê palavra por palavra
        if (word == keyword) {  // Compara a palavra exatamente com a palavra-chave
            count++;
        }
    }
    return count;
}

int main() {
    string keyword, paragraph;

    // Obtém a palavra-chave do usuário
    cout << "Digite a palavra-chave para contar: ";
    cin >> keyword;
    cin.ignore(); // Limpa o buffer do '\n'

    cout << "\nDigite os parágrafos (terminam com '$'). Digite 'End' para encerrar.\n";

    // Loop para ler parágrafos até o usuário digitar "End"
    while (true) {
        cout << "\nDigite um parágrafo: ";
        getline(cin, paragraph);

        if (paragraph == "End") {  // Se o usuário digitar "End", encerramos o programa
            cout << "\nPrograma encerrado." << endl;
            break;
        }

        // Remover o símbolo '$' caso o usuário tenha usado no final do parágrafo
        if (!paragraph.empty() && paragraph.back() == '$') {
            paragraph.pop_back();  // Remove o último caractere da string
        }

        // Conta o número total de palavras no parágrafo
        int word_count = count_words(paragraph);
        // Conta o número de ocorrências da palavra-chave
        int keyword_count = count_keyword_occurrences(paragraph, keyword);

        // Exibe os resultados
        cout << "Número de palavras no parágrafo: " << word_count << endl;
        cout << "Ocorrências exatas da palavra-chave '" << keyword << "': " << keyword_count << endl;
    }

    return 0;
}
