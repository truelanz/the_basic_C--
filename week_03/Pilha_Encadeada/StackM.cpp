#include "Stack.h"
#include <iostream>

using namespace std;

int main() {
    ItemType character;
    Stack stack;
    ItemType stackItem;

    cout << "Adicione uma String" << endl;
    cin.get(character);
    while (character != '\n') {
        stack.push(character);
        cin.get(character);
    }

// Função para remover item da Pilha, caso quiser.
    while (!stack.isEmpty()) {
        string resp;
        cout << "deseja remover um item? S/N?" << endl;
        cin >> resp;
        if (resp == "S") {
            stackItem = stack.pop();
            cout << "ITEM: " << stackItem << " removido" << endl;
        }
        else { break; }
    }
}