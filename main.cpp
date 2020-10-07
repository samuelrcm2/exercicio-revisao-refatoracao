#include "Engenheiro.cpp"
#include "Vendedor.cpp"

int main()
{

  Engenheiro eng1(35, 9.5, "Joao Snow", 3);
  Engenheiro eng2(30, 8, "Daniela Targaryen", 1);
  Engenheiro eng3(30, 8, "Bruno Stark", 2);

  eng1.print();
  eng2.print();
  eng3.print();

  Vendedor vend1(20, 5000, 6, "Tonho Lannister");
  Vendedor vend2(25, 3000, 8, "Jose Mormont");
  Vendedor vend3(30, 4000, 8, "Sonia Stark");

  vend1.print();
  vend2.print();
  vend3.print();

  return 0;
}