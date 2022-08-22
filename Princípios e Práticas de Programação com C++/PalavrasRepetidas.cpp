#include <iostream>
#include <string>
using namespace std;
int main()
{
string anterior="";
string actual;
while(cin>>actual)
{
  if(anterior==actual)
  {
    cout<<"Repetiu a palavra "<<actual<<'\n';
  }
    anterior=actual;
}
return 0;
}
