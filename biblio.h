#include <string>
using namespace std;
 
const int SIZE = 10; // Tamanho da matriz
 
void inicializarMatriz(char matriz[SIZE][SIZE], string coresMatriz[SIZE][SIZE]);
void preencherPalavraVertical(char matriz[SIZE][SIZE], string coresMatriz[SIZE][SIZE], string palavra, const string& cor, int linha, int coluna);
void preencherPalavraHorizontal(char matriz[SIZE][SIZE], string coresMatriz[SIZE][SIZE], string palavra, const string& cor, int linha, int coluna);
void exibirMatriz(char matriz[SIZE][SIZE], string coresMatriz[SIZE][SIZE]);

