//O primeiro exercicio do livro Princípios e Práticas de Programação com C++ de Bjarne Stroustrup
#include <iostream>

int main()
{
  std::cout<<"Ola, Por favor me informe os seu Nome e a sua idade"<<'\n';
    std::string primeiro_nome = "";
      int idade = 0;
        std::cin>>primeiro_nome>>idade;
          std::cout<<"Prazeres "<<primeiro_nome<<" vejo que voce tem "<<idade<<" anos de idade!\n\n\n";
std::cout<<"Agora "<<primeiro_nome<<" vamos saber quantos meses voce ja viveu!\n\n";
int meses = idade*12;
std::cout<<primeiro_nome<<" Voce ja viveu por "<<meses<<" Meses ao longo da sua vida";
  return 0;
}
