#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado
{
public:
	double quotaMensalVendas;

	double quotaTotalAnual()
	{
		return this->quotaMensalVendas * 12;
	}

	Vendedor(double SalarioHora,
			 double QuotaMensalVendas,
			 double HorasTrabalhadas,
			 string Nome) : Empregado(SalarioHora, HorasTrabalhadas, Nome), quotaMensalVendas(QuotaMensalVendas) {}

	void print() override
	{
		std::cout << "Nome: " << this->nome << std::endl;
		std::cout << "Salario Mes: " << this->pagamentoMes(this->horasTrabalhadas) << std::endl;
		std::cout << "Quota vendas: " << this->quotaTotalAnual() << std::endl;
		std::cout << std::endl;
	}
};
