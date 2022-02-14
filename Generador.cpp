#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

void numero_de_7_cifras(char (&numero)[8])
{
    for (int indice = 0; indice != 7; ++indice)
    {
        numero[indice] = '0' + std::rand() % 10;
    }
}

string linea;
string texto;

int main()
{
	char numero[8] = {};

   	ofstream archivo2("numeros.txt");
    for (int n = 0; n < 1000; ++n)
    {
        numero_de_7_cifras(numero);
        std::cout << numero << ' ';
      	archivo2<< texto <<numero<<" ";
    }
    std::cout << '\n';
    
}
