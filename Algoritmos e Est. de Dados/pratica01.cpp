#include <iostream>
using namespace std;

class Veiculo{
  private:
    string nome;
  public:
    Veiculo(const char * nome){
      this -> nome = string(nome);
      cout << "O novo objeto " << nome << " foi construído" << endl;
    };
    ~Veiculo(){
      cout << "O objeto " << nome << " foi destruído" << endl;
    }
};
int main() {
  cout << "Primeira aplicação C++" << endl;
  {
    Veiculo veiculo1("v1");
    {
      Veiculo veiculo2("v2");
      {
        Veiculo veiculo3("v3");
      }
    }
  }
}