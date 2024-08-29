#include <iostream>
#include <string>
#include <windows.h>
#include "biblio.h"
#include "Biblioteca_ProjetoFinal.h"
 
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
const string RESET = "\033[0m"; // Para resetar a cor
 
int main() {
    SetConsoleOutputCP(CP_UTF8);
    char matriz[SIZE][SIZE];
    string coresMatriz[SIZE][SIZE];
    inicializarMatriz(matriz, coresMatriz);
 
    string dica1 = "Obtido pela mistura das cores amarelo e laranja (8 letras): ";
    string dica2 = "Uma cor primaria obtida pela mistura das cores ciano e magenta (4 letras): ";
    string dica3 = "Obtida pela mistura das cores azul e amarelo (5 letras): ";
    string dica4 = "Geralmente obtido pela mistura das cores vermelho e verde (7 letras): ";
    string dica5 = "Obtida pela mistura das cores vermelho e branco (4 letras): ";
    string dica6 = "Obtida pela mistura das cores vermelho e azul (7 letras): ";
    string dica7 = "Obtido pela junção das cores ciano, magenta e amarelo (5 letras): ";
    string dica8 = "Obtida pela mistura de preto e cinza (6 letras): ";
    string dica9 = "Obtida pela mistura das cores amarelo, laranja e branco (7 letras): ";
 
    string palavra1, palavra2, palavra3, palavra4, palavra5, palavra6, palavra7, palavra8, palavra9;
 
    cout << "Aqui está uma dica para sua palavra: \n\n\n";
 
    cout << dica1;
    cin >> palavra1;
 
    cout << dica2;
    cin >> palavra2;
 
    cout << dica3;
    cin >> palavra3;
 
    cout << dica4;
    cin >> palavra4;
 
    cout << dica5;
    cin >> palavra5;
 
    cout << dica6;
    cin >> palavra6;
 
    cout << dica7;
    cin >> palavra7;
 
    cout << dica8;
    cin >> palavra8;
 
    cout << dica9;
    cin >> palavra9;
 
    preencherPalavraVertical(matriz, coresMatriz, palavra1, RED, 0, 3);
    preencherPalavraHorizontal(matriz, coresMatriz, palavra2, BLUE, 5, 0);
    preencherPalavraHorizontal(matriz, coresMatriz, palavra3, GREEN, 0, 3);
    preencherPalavraHorizontal(matriz, coresMatriz, palavra4, YELLOW, 3, 2);
    preencherPalavraHorizontal(matriz, coresMatriz, palavra5, BOLDMAGENTA, 2, 3);
    preencherPalavraHorizontal(matriz, coresMatriz, palavra6, MAGENTA, 1, 0);
    preencherPalavraHorizontal(matriz, coresMatriz, palavra7, BLACK, 4, 1);
    preencherPalavraHorizontal(matriz, coresMatriz, palavra8, GRAY, 6, 2);
    preencherPalavraHorizontal(matriz, coresMatriz, palavra9, GOLD, 7, 2);
 
    cout << "Palavras cruzadas (Tema: Cores):" << endl;
    exibirMatriz(matriz, coresMatriz);
 
    return 0;
}