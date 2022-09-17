#include <iostream>
void squareX(int v)
{
  int i=1;
  int quadrado = 0;
while(i<=v)
  //for(int i=0; i<=v; ++i)

  {
    quadrado += v;
    ++i;
  }
std::cout<<"O quadrado do valor: "<<v<<" eh: "<<quadrado<<'\n';
}

int main()
{
  int x;
std::cout<<"Informe o numero: "<<'\n';
std::cin>>x;
squareX(x);

  return 0;
}
