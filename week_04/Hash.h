#include "StudentClass.h"

class Hash
{
private:
    int getHash(StudentClass student);
    int max_items;
    int lenght;
    StudentClass* structure;

public:
    Hash();

    Hash(int max_items = 100);
    bool isFull() const;
    int getLenght() const;

    void retrieveItem(StudentClass& student, bool& found);
    void insertItem(StudentClass student);
    void deleteItem(StudentClass student);
    void print();
};