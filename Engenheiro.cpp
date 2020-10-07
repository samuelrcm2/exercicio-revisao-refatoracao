#include <string>
#include "Empregado.hpp"

using namespace std;
class Engenheiro : public Empregado
{
public:
  int projetos;

  Engenheiro(double SalarioHora,
             double HorasTrabalhadas,
             string Nome,
             int Projetos) : Empregado(SalarioHora, HorasTrabalhadas, Nome),
                             projetos(Projetos) {}

  void print() override
  {
    cout << "Nome: " << this->nome << endl;
    cout << "Salario Mes: " << this->pagamentoMes(this->horasTrabalhadas) << endl;
    cout << "Projetos: " << this->projetos << endl;
    cout << endl;
  }
};
