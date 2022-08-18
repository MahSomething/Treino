//Um simples exercicio de um progruma de imprime uma lista de valores na forma reversa
#include <iostream>

int main() {
   int N=5;
   int arr[N] = {1,2,4,5,6};
   for (int i = 1; i<=N; ++i)
   {
       std::cout<<arr[N-i]<<'\n';
   }

    return 0;
}