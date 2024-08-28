#include "queue.h"
#include <iostream>

using namespace std;

int main() {
    ItemType character;
    Queue queue;
    ItemType queueItem;

    cout << "Adicione uma String" << endl;
    cin.get(character);
    while (character != '\n') {
        queue.enqueue(character);
        cin.get(character);
    }

// Função para remover item da Pilha, caso quiser.
    while (!queue.isEmpty()) {
        string resp;
        cout << "deseja remover um item? S/N?" << endl;
        cin >> resp;
        if (resp == "S") {
            queueItem = queue.dequeue();
            cout << "ITEM: " << queueItem << " removido" << endl;
        }
        else { break; }
    }
}