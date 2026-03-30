#include <iostream>
#include <string>
#include <windows.h>

/*Exercício 1  - Receber através de digitação uma mensagem. 
Apresentar esta mensagem, centralizada, na linha 5 da tela.
À partir daí, cada letra desta mensagem deverá "cair", da linha 5 até a linha 20, simulando uma "cascata". 
Ao final, a mensagem deverá estar toda apresentada na linha 20.*/

using namespace std;

int main() {
    string mensagem;
    cout << "Digite a mensagem: ";
    getline(cin, mensagem);

    int largura = 80;
    int col_inicial = (largura - mensagem.length()) / 2;

    char tela[22][80];

    // Para preecher a matriz com espacos em branco
    for (int i = 0; i < 22; i++) {
        for (int j = 0; j < 80; j++) {
            tela[i][j] = ' ';
        }
    }

    for (int j = 0; j < mensagem.length(); j++) {
        tela[4][col_inicial + j] = mensagem[j];
    }

    system("cls");
    for (int i = 0; i < 22; i++) {
        for (int j = 0; j < 80; j++) {
            cout << tela[i][j];
        }
        cout << endl;
    }
    Sleep(1000); 

    // Código para queda das letras em efeito cascata
    for (int j = 0; j < mensagem.length(); j++) {
        char letra = mensagem[j];
        int col_atual = col_inicial + j;

        tela[4][col_atual] = ' ';

        for (int linha = 5; linha <= 20; linha++) {
            tela[linha - 1][col_atual] = letra;

            if (linha > 5) {
                tela[linha - 2][col_atual] = ' ';
            }
            system("cls");
            for (int r = 0; r < 22; r++) {
                for (int c = 0; c < 80; c++) {s
                    cout << tela[r][c];
                }
                cout << endl;
            }

            Sleep(30); // Ajuste da velocidade da queda (quanto menor, mais rapido)
        }
    }

    return 0;
}