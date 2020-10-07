#include "Empregado.hpp"

using namespace std;

double Empregado::pagamentoMes(double horasTrabalhadas)
{
    double horasConvertidas;

    if (temHorasExtras(horasTrabalhadas))
    {
        double horasExtra = horasTrabalhadas - 8;
        horasConvertidas = horasTrabalhadas + horasExtra / 2;
    }
    return horasConvertidas * salarioHora;
}

bool Empregado::temHorasExtras(double horasTrabalhadas) { return horasTrabalhadas > 8; }