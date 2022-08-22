#include <iostream>

int main()
{
  for (auto i = 1; i<=100; ++i)
  {
    if (i%3==0 && i%5==0)
    {
      std::cout<<i<<" fizzbuzz \n\n";
    }
    else if (i%3==0)
     {
       std::cout<<i<<" fizz \n\n";
     }
     else if(i%5==0)
     {
       std::cout<<i<<" buzz \n\n";
     }
  }
  return 0;
}
