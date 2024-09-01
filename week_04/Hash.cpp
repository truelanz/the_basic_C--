/* #include "StudentClass.h" */
#include "Hash.h"

using namespace std;

Hash::Hash(int max) {
    lenght = 0;
    max_items = max;
    structure = new StudentClass[max_items];
}

bool Hash::isFull() const {
    return (lenght == max_items);
}

int Hash::getLenght() const {
    return lenght;
}

/* void Hash::retrieveItem(StudentClass& student, bool& found) {
    int location = getHash(student);
    StudentClass aux = structure[location];
    if (student.getRa() == -1) {
        found = false;
    } else {
        found = true;
        student = aux;
    }
} */

void

void Hash::insertItem(StudentClass student) {
    int location = getHash(student);
    structure[location] = student;
    lenght++;
}

void Hash::deleteItem(StudentClass student) {
    int location = getHash(student);
    structure[location] = StudentClass();
    lenght--;
}

void Hash::print()
{
    for (int i = 0; i < max_items; i++) {
        cout << i << ":" << structure[i].getRa() << ", "
        << structure[i].getName() << endl;
    }
}

int Hash::getHash(StudentClass student) {
    return student.getRa() % max_items;
}