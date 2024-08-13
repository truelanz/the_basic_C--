#include <iostream>
using namespace std;

int main() {
    int num_elem;
    cout << "QUAL O TAMANHO DO VETOR? ";
    cin >> num_elem;

    // ALOCAÇÃO DE VETOR EM MEMÓRIA
    int* vetorDinamico = new int[num_elem];

    for (size_t i = 0; i < num_elem; i++)
    {
        vetorDinamico[i] = 2*i;
        cout << "vetor[" << i << "] = " << vetorDinamico[i] << "\n";
    }

    /* 
    PARA DESALOCAR UM VETOR DA MEMÓRIA:

    delete [] vetorName;

     */
    

    return 0;
}

