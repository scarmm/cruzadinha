#include "biblio.h"
#include <iostream>
#include <string>
using namespace std;

const string RED = "\033[31m";
const string BLUE = "\033[34m";
const string GREEN = "\033[32m";
const string YELLOW = "\033[33m";
const string BOLDMAGENTA = "\033[1;35m";
const string MAGENTA = "\033[35m";
const string BLACK = "\033[30m";
const string GRAY = "\033[90m";
const string GOLD = "\033[93m";
const string RESET = "\033[0m"; //para resetar a cor

void inicializarMatriz(char matriz[SIZE][SIZE], string coresMatriz[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            matriz[i][j] = ' ';
            coresMatriz[i][j] = "";
        }
    }
}
 
void preencherPalavraVertical(char matriz[SIZE][SIZE], string coresMatriz[SIZE][SIZE], string palavra, const string& cor, int linha, int coluna) {
    for (size_t i = 0; i < palavra.length(); ++i) {
        matriz[linha + i][coluna] = palavra[i];
        coresMatriz[linha + i][coluna] = cor;
    }
}
 
void preencherPalavraHorizontal(char matriz[SIZE][SIZE], string coresMatriz[SIZE][SIZE], string palavra, const string& cor, int linha, int coluna) {
    for (size_t i = 0; i < palavra.length(); ++i) {
        matriz[linha][coluna + i] = palavra[i];
        coresMatriz[linha][coluna + i] = cor;
    }
}
 
void exibirMatriz(char matriz[SIZE][SIZE], string coresMatriz[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (matriz[i][j] != ' ') {
                cout << coresMatriz[i][j] << matriz[i][j] << RESET << " ";
            } else {
                cout << ". ";
            }
        }
        cout << endl;
    }
}