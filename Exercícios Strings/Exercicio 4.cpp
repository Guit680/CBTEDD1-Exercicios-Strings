#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

/*Exercício 4 - À partir de uma lista de nomes disponível em um arquivo TXT, transforma-los em nomes no formato citação bibliográfica.s*/

using namespace std;

char maiusculo(char c) {
    return toupper(c);

}

string emMaiusculas(string palavra) {
    for (int i = 0; i < (int)palavra.size(); i++)
        palavra[i] = toupper(palavra[i]);
    return palavra;
}

string converter(const string &linha) {
    // Separa as palavras manualmente usando um array simples
    string palavras[50];
    int qtd = 0;
    string atual = "";

    for (int i = 0; i <= (int)linha.size(); i++) {
        if (i == (int)linha.size() || linha[i] == ' ') {
            if (atual != "") {
                palavras[qtd++] = atual;
                atual = "";
            }
        } else {
            atual += linha[i];
        }
    }

    if (qtd == 0) return "";
    if (qtd == 1) return emMaiusculas(palavras[0]);

    string sobrenome = emMaiusculas(palavras[qtd - 1]);

    string resultado = sobrenome + ", " + palavras[0];

    for (int i = 1; i < qtd - 1; i++) {
        resultado += " ";
        resultado += toupper(palavras[i][0]);
        resultado += ".";
    }

    return resultado;
}

int main() {
    ifstream arquivo("nomes.txt");

    if (!arquivo.is_open()) {
        cout << "Erro ao abrir nomes.txt" << endl;
        return 1;
    }

    cout << "======================================" << endl;
    cout << "  Conversor - Citacao Bibliografica   " << endl;
    cout << "======================================" << endl;

    string linha;
    int contador = 0;

    while (getline(arquivo, linha)) {
        if (linha == "") continue;
        cout << "Original : " << linha          << endl;
        cout << "Citacao  : " << converter(linha) << endl;
        cout << "--------------------------------------" << endl;
        contador++;
    }

    arquivo.close();
    cout << contador << " nome(s) convertido(s)." << endl;

    return 0;
}