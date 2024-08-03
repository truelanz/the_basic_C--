#include <iostream>
using namespace std;

/* 
 - No C++ os vetores devem ser do mesmo tipo 
 - O tamanho é fixado na declaração do vetor
 - Elementos ocupam regiões consecutivas de memória
*/

int main() {
    
    //Declaração de vetor: tipo nameVar[quantidade] = {elem1, elem2, etc};
    int vetor1[5] = {20, 0, 13}; //Na memória ficaria: [20,0,13,0,0], vetores não alocados valor, iniciará com 0.
    int vetor1Size = sizeof(vetor1) / sizeof(vetor1[0]); //Calcula o número de elementos no vetor

    cout << "VETOR [";
    for (int i = 0; i < vetor1Size; i++) {
        cout << vetor1[i] << " | "; 
    }
    cout << "]";

    vetor1[4] = 50;
    cout << "\nVETOR NOVO [";
    for (int i = 0; i < vetor1Size; i++) {
        cout << vetor1[i] << " | "; 
    }
    cout << "]";

    /* 
    Especificabndo o tamanho do vetor como constante:

    const int NUM_ELEM = 10; // variável que será o tamanho do vetor.
    int vetor[NUM_ELEM];
     */

    return 0;
}

