#include <iostream>
#include <string>
#include <cctype>  // Para funções como isalpha(), islower(), isupper(), tolower(), toupper()

using namespace std;

// (A) Contar o número total de caracteres alfabéticos em uma string
int count_alpha(const string &s) {
    int count = 0; // Contador de caracteres alfabéticos
    for (char c : s) {
        if (isalpha(c)) { // Verifica se o caractere é uma letra
            count++;
        }
    }
    return count; // Retorna o total de letras encontradas
}

// (B) Contar o número de caracteres minúsculos em uma string
int count_lowers(const string &s) {
    int count = 0;
    for (char c : s) {
        if (islower(c)) { // Verifica se o caractere é uma letra minúscula
            count++;
        }
    }
    return count;
}

// (B) Contar o número de caracteres maiúsculos em uma string
int count_uppers(const string &s) {
    int count = 0;
    for (char c : s) {
        if (isupper(c)) { // Verifica se o caractere é uma letra maiúscula
            count++;
        }
    }
    return count;
}

// (C) Comparar duas strings e imprimir se são iguais ou qual vem depois na ordem lexicográfica
void equals_or_greater(const string &s1, const string &s2) {
    if (s1 == s2) {  
        cout << "As strings são iguais." << endl;
    } else if (s1 > s2) {  
        cout << "\"" << s1 << "\" vem depois de \"" << s2 << "\" na ordem lexicográfica." << endl;
    } else {  
        cout << "\"" << s1 << "\" vem antes de \"" << s2 << "\" na ordem lexicográfica." << endl;
    }
}

// (D) Converter uma string para minúsculas
string tolower(const string &s1) {
    string result = s1;  // Criamos uma cópia para modificar
    for (char &c : result) { // Iteramos sobre cada caractere
        c = tolower(c); // Converte cada caractere para minúsculo
    }
    return result;  // Retorna a string modificada
}

// (E) Remover múltiplos espaços e substituir por um único espaço
string replace(const string &s1) {
    string result;
    bool space_found = false;

    for (char c : s1) {
        if (c == ' ') {
            if (!space_found) { // Se for o primeiro espaço encontrado, adicionamos
                result += c;
                space_found = true;
            }
        } else {
            result += c;
            space_found = false;
        }
    }
    return result;
}

// (F) Capitalizar a primeira letra de cada palavra em uma string
string capitalize(const string &s1) {
    string result = s1;
    bool new_word = true; // Indica se estamos no começo de uma nova palavra

    for (char &c : result) {
        if (isspace(c)) { // Se for um espaço, a próxima letra será o início de uma palavra
            new_word = true;
        } else if (new_word) {
            c = toupper(c); // Converte a primeira letra da palavra para maiúscula
            new_word = false;
        }
    }
    return result;
}

// (G) Verificar se uma string é um palíndromo (considerando apenas caracteres alfabéticos)
bool ispalindrome(const string &s1) {
    string clean_str = ""; // Armazena apenas os caracteres alfabéticos em minúsculas
    for (char c : s1) {
        if (isalpha(c)) { // Se for uma letra, adicionamos em minúscula
            clean_str += tolower(c);
        }
    }

    int left = 0, right = clean_str.size() - 1;
    while (left < right) {
        if (clean_str[left] != clean_str[right]) {
            return false; // Se encontrar diferença, não é palíndromo
        }
        left++;
        right--;
    }
    return true; // Se chegou até aqui, é um palíndromo
}

// (TESTE) Função principal para testar todas as funções
int main() {
    string str1, str2;

    // Entrada das duas strings do usuário
    cout << "Digite a primeira string: ";
    getline(cin, str1);
    cout << "Digite a segunda string: ";
    getline(cin, str2);

    // Testando todas as funções com as strings fornecidas
    cout << "\n[A] Número de caracteres alfabéticos em str1: " << count_alpha(str1) << endl;
    cout << "[A] Número de caracteres alfabéticos em str2: " << count_alpha(str2) << endl;

    cout << "\n[B] Número de caracteres minúsculos em str1: " << count_lowers(str1) << endl;
    cout << "[B] Número de caracteres minúsculos em str2: " << count_lowers(str2) << endl;
    
    cout << "\n[B] Número de caracteres maiúsculos em str1: " << count_uppers(str1) << endl;
    cout << "[B] Número de caracteres maiúsculos em str2: " << count_uppers(str2) << endl;

    cout << "\n[C] Comparação entre as duas strings: " << endl;
    equals_or_greater(str1, str2);

    cout << "\n[D] str1 em minúsculas: " << tolower(str1) << endl;
    cout << "[D] str2 em minúsculas: " << tolower(str2) << endl;

    cout << "\n[E] str1 sem espaços extras: " << replace(str1) << endl;
    cout << "[E] str2 sem espaços extras: " << replace(str2) << endl;

    cout << "\n[F] str1 capitalizada: " << capitalize(str1) << endl;
    cout << "[F] str2 capitalizada: " << capitalize(str2) << endl;

    cout << "\n[G] str1 é um palíndromo? " << (ispalindrome(str1) ? "Sim" : "Não") << endl;
    cout << "[G] str2 é um palíndromo? " << (ispalindrome(str2) ? "Sim" : "Não") << endl;

    return 0;
}
