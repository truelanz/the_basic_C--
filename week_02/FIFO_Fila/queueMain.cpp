#include "queueClass.h"
#include <iostream>

using namespace std;

int main() {
    char character;
    QueueClass queue;
    char queueItem;

    cout << "Adicione uma sequencia de CHAR." << endl;
    cin.get(character);
    while (character != '\n' and !queue.isfFull()){
        queue.enqueue(character);
        cin.get(character);
    }

    while (!queue.isEmpty()) {
        queueItem = queue.dequeue();
        cout << "ITEM: " << queueItem << " REMOVIDO" << endl;
    }

    return 0;
}