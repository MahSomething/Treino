#include <iostream>

using namespace std;

int main()
{
int c=0;
int i=1;
int d;
cout<<c<<"\n";
cout<<i<<"\n";
  while (i<987)
  {
  d=c;
  c=i;
  i+=d;
  cout<<i<<"\n";
  }
return 0;
}
