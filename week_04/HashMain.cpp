/* #include "StudentClass.h" */
#include "Hash.h"
#include <iostream>

using namespace std;

    Hash studentHash(10);
    int ras[7] = { 12704, 31300, 1234, 49001, 52202, 65606, 91234 };
    string names[7] = { "Pedro", "Raul", "Paulo", "Carlos", "Lucas", "Maria", "Samanta"};
    
    int main(int argc, char const *argv[])
    {
        for (int i = 0; i < 7; i++) {
            StudentClass student = StudentClass(ras[i], names[i]);
            studentHash.insertItem(student);
        }
        studentHash.print();
        cout << "---------------------------------------" << endl;

        StudentClass student(12704, "");
        bool found = false;
        studentHash.retrieveItem(student, found);
        cout << student.getName() << " -> " << found << endl <<
        "----------------------------------" << endl;      

        studentHash.deleteItem(student);
        studentHash.print();

        return 0;
    }
    
