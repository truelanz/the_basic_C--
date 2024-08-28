#include "stackClass.h"
#include <iostream>

using namespace std;

int main() {
    ItemType charactere;
    StackClass stack;
    ItemType stackItem;

    cout << "Adicione uma String." <<endl;
    cin.get(charactere);
    while (charactere != '\n'){
        stack.push(charactere);
        cin.get(charactere);
    }

    // Deseja remover item da pilha?
    while(!stack.isEmpty()) {
        string resp;
        cout << "Deseja remover um item da Pilha S/N?" << endl;
        cin >> resp;
        if(resp == "S") {
            stackItem = stack.pop();
            cout << "ITEM: " << stackItem << " removido" << endl;
        } else { break; }
    }
    
}