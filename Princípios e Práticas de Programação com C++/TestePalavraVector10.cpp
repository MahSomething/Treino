#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
{  std::string PalavraDesgosto = "Racismo";
  std::string Temp_Palavra = "";
  std::vector<std::string> PalavraGosto;
//for(int i=0; i<PalavraGosto.size(); ++i)
while(cin>>Temp_Palavra)
{
  if(Temp_Palavra==PalavraDesgosto)
  {
    Temp_Palavra="RUIDO";
  }
  PalavraGosto.push_back(Temp_Palavra);
}
for(int i=0; i<PalavraGosto.size(); ++i)
cout<<PalavraGosto[i]<<" ";
/*if(Temp_Palavra==PalavraDesgosto)
    PalavraGosto.push_back(PalavraDesgosto="RUIDO");
   else
   PalavraGosto.push_back(Temp_Palavra);
for(int i=0; i<PalavraGosto.size(); ++i)
    cout<<PalavraGosto[i]<<'\n';*/
  }
    return 0;
  }
