#include <iostream>
#include <string>

int count_occurences(const char& letter, const std::string& word)
{
  auto counter=0;
for(int i=0;i<word.length();++i) /*Tentei implementar o For Range Based, porem vem dando o Erro de "begin" 
  nao declarado. Nesta fase eu nao intendo o por que, vou continuar estudando para poder intender*/
if(letter==word[i])
++counter;
return counter;
}
int main()
{
    using namespace std::string_literals;

    const auto word = "evidentemente"s;
    const auto letter = 'e';
    std::cout << "number of " << letter << " in " << word << ": "<< count_occurences(letter, word);
}
