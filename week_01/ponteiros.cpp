
// Declaração de variáveis de ponteiros:
int alpha;
int* intPointer;

// Inicialização de ponteiro
//intPointer --> alpha
intPointer = &alpha; // & nos permite obter o endereço de memória de uma variável.



/* 
Alocação estática = em tempo de compitalção
Alocação dinâmica = em tempo de execução
 */

// new - alocação, delete - desalocação

// Para apontar um ponteiro para o vazio, usamos a constante NULL, do pacote <cstddef>
#include <cstddef>
bool* truth = NULL;
float* money = NULL;

//ALOCAÇÃO/APONTAMENTO DE MEMÓRIA
float* num = new float;
//ADIÇÃO DE VALOR NO ESPAÇO ALOCADO NA MEMÓRIA
*num = 33.46;