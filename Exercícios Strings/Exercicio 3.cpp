#include <iostream>
#include <fstream>
#include <string>

/*Exercício 3 - À partir de uma lista de nomes disponível em um arquivo TXT, transforma-los em nomes no formato agenda telefônica.*/

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
	ifstream arquivo("nomes.txt");
    
    if (!arquivo.is_open()) {
        cout << "Erro ao abrir o arquivo 'nomes.txt'!" << endl;
        cout << "Certifique-se de que ele existe na mesma pasta do programa." << endl;
        return 1;
    }

    string nomeCompleto;
    cout << "--- FORMATO AGENDA ---" << endl;
    
    while (getline(arquivo, nomeCompleto)) {

        size_t posUltimoEspaco = nomeCompleto.find_last_of(' ');
        
        if (posUltimoEspaco != string::npos) {
            string ultimoNome = nomeCompleto.substr(posUltimoEspaco + 1);
            string restoDoNome = nomeCompleto.substr(0, posUltimoEspaco);
            
            cout << ultimoNome << ", " << restoDoNome << endl;
        } else {

            cout << nomeCompleto << endl;
        }
    }

    arquivo.close();
    return 0;
}