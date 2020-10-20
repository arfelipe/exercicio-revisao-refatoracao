#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {

  public:
    double salarioHora;
    string nome;
    double horasTrabalhadas;
    void print(){
         std::cout << "Nome: " << nome << std::endl;
         std::cout << "Salario Mes: " << pagamentoMes(horasTrabalhadas) << std::endl;
    }
    private:
    double pagamentoMes(double t) {

      double y=t;

	  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (t > 8) {
        double x = t - 8;
        y += x / 2;
      }
	  return t * salarioHora;
    }
    
};

#endif
