#include <iostream>
#include <string>
int main() {
  double dollar = 0.00;
  double moeda = 0.00;
  char unidade = ' ';
std::string nome = "";
  std::cout<<"Ola! Seja Benvindo ao seu Conversor de Moedas extrangeiras para o dollar."<<'\n'<<'\n';
  std::cout<<"Para podermos continuar porfavor poderia Informar o seu nome?"<<'\n'<<'\n';
  std::cin>>nome;
  if(nome=="nao")
  {
    std::cout<<"\nOpah! Sentimos muito, mas nao podemos trabalhar com quem nao pode nos confiar com o seu nome"<<'\n';
  }
 else {
  std::cout<<"Ola "<<nome<<" Obrigado por fornecer o seu nome, nos agraecemos"<<'\n'<<'\n';
  std::cout<<"Por favor informe a quantidade de moedas que pretende converter seguido da unidade da moeda"<<'\n'<<'\n';
  std::cin>>moeda;
  std::cin>>unidade;
  switch (unidade) {
    case 'i':
    dollar=moeda*2;
    std::cout<<"O valor em dollar da moeda "<<unidade<<" e de $"<<dollar<<'\n';
break;
    case 'e':
    dollar=moeda*3;
    std::cout<<"O valor em dollar da moeda "<<unidade<<" e de $"<<dollar<<'\n';
break;
    case 'l':
    dollar=moeda*4;
    std::cout<<"O valor em dollar da moeda "<<unidade<<" e de $"<<dollar<<'\n';
break;
  default:
  std::cout<<"Desculpa, mas nao conhecemos tal unidade de moeda"<<'\n';
  break;
  }
while(unidade==' ')
  {
    std::cout<<"A unidade nao deve ser fornecidade"<<'\n';
    std::cin>>unidade;
  }
}
  return 0;
}
