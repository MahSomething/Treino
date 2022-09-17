#include <iostream>

int main()
{
char letra = 'a';
int i = 0;
while ((letra+i)<=122) {
char b = letra+i;
std::cout<<b<<'\t'<<letra+i<<'\n';
++i;
}

/*
while (i<=122) - Primeira iteracao que tentei executar foi esta
porem ela pushava todos os possiveis carateres ate 122, o que
ultrapassava o Z, e depois disso pensei em implementar a sulacao
que deixo ficar aqui, esta solucao pushou ate onde eu queria
que eh o Z e nao mais.

std::cout<<b<<std::endl;
Aqui foi onde testei a saida do carater para ver se tinha percebido
o pedido, e so depois fui implementar o carater junto ao devido numbero
*/
return 0;
}
