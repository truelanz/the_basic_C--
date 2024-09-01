#include <string>
#include <iostream>

using namespace std;

class StudentClass
{
private:
    int ra;
    std::string name;
public:
    StudentClass();
    StudentClass(int ra, std::string name);
    string getName() const;
    int getRa() const;
};