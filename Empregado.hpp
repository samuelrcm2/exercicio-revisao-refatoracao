#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado
{
public:
  double salarioHora;
  double horasTrabalhadas;
  std::string nome;

  Empregado(double SalarioHora,
            double HorasTrabalhadas,
            std::string Nome) : salarioHora(SalarioHora),
                                horasTrabalhadas(HorasTrabalhadas),
                                nome(Nome) {}

  double pagamentoMes(double horasTrabalhadas);

  bool temHorasExtras(double horasTrabalhadas);

  virtual void print() = 0;
};

#endif