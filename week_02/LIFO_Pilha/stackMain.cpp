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

    stackItem = stack.pop();
    cout << "ITEM: " << stackItem << " removido" << endl;

    stackItem = stack.pop();
    cout << "ITEM: " << stackItem << " removido" << endl;

    stackItem = stack.pop();
    cout << "ITEM: " << stackItem << " removido" << endl;

    stackItem = stack.isEmpty();
    
    cout << endl;

}