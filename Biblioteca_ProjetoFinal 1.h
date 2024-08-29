/*Biblioteca c++
Autora: luciana e sara
Data: 27/06/2024
*/

#include <iostream>
using namespace std;

________________________________________________________
//função para inicializar a matriz com espaços em branco

void inicializarMatriz(char matriz[][SIZE], string coresMatriz[][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matriz[i][j] = ' ';
            coresMatriz[i][j] = RESET;
        }
    }
}

_____________________________________________________________________________
//função para exibir a matriz

void exibirMatriz(char matriz[][SIZE], string coresMatriz[][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << coresMatriz[i][j] << matriz[i][j] << RESET << " ";
        }
        cout << endl;
    }
}

_____________________________________________________________________________
//função para preencher uma palavra horizontalmente com uma cor

void preencherPalavraHorizontal(char matriz[][SIZE], string coresMatriz[][SIZE], string palavra, string cor, int linha, int coluna) {
    int tamanho = palavra.length();
    for (int i = 0; i < tamanho; i++) {
        matriz[linha][coluna + i] = palavra[i];
        coresMatriz[linha][coluna + i] = cor;
    }
}

_____________________________________________________________________________
//função para preencher uma palavra verticalmente com uma cor

void preencherPalavraVertical(char matriz[][SIZE], string coresMatriz[][SIZE], string palavra, string cor, int linha, int coluna) {
    int tamanho = palavra.length();
    for (int i = 0; i < tamanho; i++) {
        matriz[linha + i][coluna] = palavra[i];
        coresMatriz[linha + i][coluna] = cor;
    }
}



