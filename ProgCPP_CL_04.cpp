#include <iostream>
#include <string>

using namespace std;

class Estudante {
    public:
    string nome;
    int idade;

    void mostrar() {
        cout << nome <<  " "  << idade << endl;
    }
};

int main() {
    Estudante estudante1;
    estudante1.nome = "Joao";
    estudante1.idade = 20;
    estudante1.mostrar();

    return 0;
}

