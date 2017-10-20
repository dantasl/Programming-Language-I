/**
 * @file	fatorial.cpp
 * @brief	Calcula o fatorial de um número fornecido pelo usuário.
 * @author	Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since	15/08/2017
 * @date	15/08/2017
 */

#include "questao2/fatorial.h"

/**
 * @brief Função implementada para calcular o fatorial de forma recursiva.	
 */
long fatorial(int n){
	if(n <= 1)
		return n;
	else
		return n * fatorial(n - 1);
}