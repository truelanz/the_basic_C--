#include <string>
using namespace std;

class Alunos
{
private:
    int ra;
    string nome;
public:
    Alunos();
    ~Alunos();
    Alunos(int ra, string nome);

    string getNome() const;
    int getRa() const;
};