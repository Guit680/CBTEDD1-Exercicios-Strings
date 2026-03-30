#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

/*Exercício 2  - Receber através de digitação uma mensagem. 
Informar se esta mensagem é ou não um dado palíndromo (no caso de haver espaços no texto, desconsiderá-los para a verificação). */

using namespace std;

// Retorna a string sem espacos e toda em maiusculo
string normalizar(const string &texto) {
    string resultado = "";
    for (int i = 0; i < (int)texto.size(); i++) {
        if (texto[i] != ' ') {
            resultado += toupper(texto[i]);
        }
    }
    return resultado;
}

bool ehPalindromo(const string &texto) {
    string normalizado = normalizar(texto);
    string invertido   = normalizado;
    reverse(invertido.begin(), invertido.end());
    return normalizado == invertido;
}

int main() {
    string mensagem;

    cout << "==============================" << endl;
    cout << "  Verificador de Palindromo   " << endl;
    cout << "==============================" << endl;
    cout << "Digite a mensagem: ";
    getline(cin, mensagem);
    cout << endl;

    string normalizado = normalizar(mensagem);
    cout << "Texto original  : " << mensagem   << endl;
    cout << "Texto verificado: " << normalizado << endl;
    cout << endl;

    if (ehPalindromo(mensagem)) {
        cout << "[SIM] \"" << mensagem << "\" e um palindromo!" << endl;
    } else {
        cout << "[NAO] \"" << mensagem << "\" NAO e um palindromo." << endl;
    }

    return 0;
}