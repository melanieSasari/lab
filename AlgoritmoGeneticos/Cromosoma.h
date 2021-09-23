#pragma once
#include <iostream>
#include <ctime>
using namespace std;
#define TAM 20

class Cromosoma
{
private:
	int genes[TAM];
	int fuerza;
public:
	Cromosoma();
	~Cromosoma();
	void mostrarGenes();
	void crearCromosomaRandom();
};

Cromosoma::Cromosoma()
{
	
	fuerza = 0;
}
Cromosoma::~Cromosoma()
{

}
void Cromosoma::mostrarGenes()
{
	for (int i = 0;i < TAM;i++)
	{
		cout << genes[0] << " ";
	}
}
void Cromosoma::crearCromosomaRandom()
{
	srand(time(NULL));
	for (int i = 0;i < TAM;i++)
	{
		if (rand() % (1 - 0 + 1) + 0 < 1 / 2)
		{
			genes[i] = 0;
		}
		else
		{
			genes[i] = 1;
		}
	}
}

