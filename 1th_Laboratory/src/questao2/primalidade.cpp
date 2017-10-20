/**
 * @file	primalidade.cpp
 * @brief	Calcula o maior número primo anterior a um número fornecido.
 * @author	Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since	15/08/2017
 * @date	15/08/2017
 */

#include "questao2/primalidade.h"

/**
 * @brief Função implementada para calcular o maior número primo anterior de forma recursiva.	
 */
long primo(long n){
	long i;
	for (i = 2; i < n; ++i){  /*!< i = 2 porque qualquer número é divisível por 1 */
		if(n%i == 0){ /*!< Verifica se o n é divisível por um número i no intervalo ]1, n] */
			return primo(n - 1); /*!< Caso ele seja, não satisfaz a regra matemática para ser um número primo. */
		}
	}
	/**
	 * @brief Se o algoritmo executar até aqui, o número é primo.
	 * Significa que nenhum número no intervalo é divisível por n, a não ser o próprio n, classificando-o assim
	 * como um número primo.
	 */
	return i;
}