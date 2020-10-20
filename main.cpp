#include "Engenheiro.cpp"
#include "Vendedor.cpp"

int main() {

  Engenheiro eng1;
  eng1.nome = "Joao Snow";
  eng1.salarioHora = 35;
  eng1.projetos = 3;
  eng1.horasTrabalhadas=9.5;
  eng1.print();
  std::cout << "Projetos: " << eng1.projetos << std::endl;
  std::cout << std::endl;

  Engenheiro eng2;
  eng2.nome = "Daniela Targaryen";
  eng2.salarioHora = 30;
  eng2.projetos = 1;
  eng2.horasTrabalhadas=8;
  eng2.print();
  std::cout << "Projetos: " << eng2.projetos << std::endl;
  std::cout << std::endl;

  Engenheiro eng3;
  eng3.nome = "Bruno Stark";
  eng3.salarioHora = 30;
  eng3.projetos = 2;
  eng3.horasTrabalhadas=8;
  eng3.print();
  std::cout << "Projetos: " << eng3.projetos << std::endl;
  std::cout << std::endl;


  Vendedor vend1;
  vend1.nome = "Tonho Lannister";
  vend1.salarioHora = 20;
  vend1.quotaMensalVendas = 5000;
  vend1.horasTrabalhadas=6;
  vend1.print();
  std::cout << "Quota vendas: " << vend1.quotaTotalAnual() << std::endl;
  std::cout << std::endl;

  Vendedor vend2;
  vend2.nome = "Jose Mormont";
  vend2.salarioHora = 25;
  vend2.quotaMensalVendas = 3000;
  vend2.horasTrabalhadas=8;
  vend2.print();
  std::cout << "Quota vendas: " << vend2.quotaTotalAnual() << std::endl;
  std::cout << std::endl;

  Vendedor vend3;
  vend3.nome = "Sonia Stark";
  vend3.salarioHora = 30;
  vend3.quotaMensalVendas = 4000;
  vend3.horasTrabalhadas=8;
  vend3.print();
  std::cout << "Quota vendas: " << vend3.quotaTotalAnual() << std::endl;

  return 0;
}
