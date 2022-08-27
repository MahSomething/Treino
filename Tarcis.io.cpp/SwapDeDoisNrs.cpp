#include <iostream>

void swap(int& i, int& j)
{
  int temp=0;
  temp=i;
  i=j;
  j=temp;
}

int main()
{
    auto i = 2, j = 3;
    std::cout<<"i Antes do Swap: "<<i<<'\n';
    std::cout<<"j Antes do Swap: "<<j<<'\n'<<'\n';
    swap(i, j);
    std::cout<<"i Depois do Swap: " << i << "\n"; // deve imprimir 3
    std::cout<<"j Depois do Swap: " << j << "\n"; // deve imprimir 2
}
