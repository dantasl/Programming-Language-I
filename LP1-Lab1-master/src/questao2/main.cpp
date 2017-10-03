/**
 * @file	main.cpp
 * @brief	Função principal.
 *			Recebe o valor do usuário e chama as funções que calculam o fatorial e primalidade.
 * @author	Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since	15/08/2017
 * @date	15/08/2017
 */
#include <iostream>
#include "questao2/fatorial.h"
#include "questao2/primalidade.h"
int main()
{
	int numero;
	std::cin >> numero;
	std::cout << "Maior numero primo anterior ao fatorial de " << numero;
	std::cout << " (" << fatorial(numero) << ") eh: " << primo(fatorial(numero)) << std::endl;
	return 0;
}