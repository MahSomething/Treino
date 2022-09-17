#include <iostream>

int main()
{
char letra = 'A';
char digit = '0';
//int i = 0;
std::cout<<"***LETRAS***"<<'\n'<<'\n';
for (int i=0;(letra+i)<=90; i++)
{
  char b = letra+i;
  std::cout<<b<<'\t'<<letra+i<<'\n';
}

std::cout<<"\n***DIGITOS***"<<'\n'<<'\n';
for (int j=0;(digit+j)<=57; j++)
{
  char c = digit+j;
  std::cout<<c<<'\t'<<digit+j<<'\n';
}
return 0;
}
