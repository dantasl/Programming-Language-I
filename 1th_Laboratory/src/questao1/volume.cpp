/**
 * @file	volume.cpp
 * @brief	Definição das funções contendo as fórmulas para calcular volumes.
 * 		    Serve para cubos; paralelepipedos; esferas e pirâmides de base quadrangular.
 * @author	Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since	14/08/2017
 * @date	14/08/2017
 */

#include "questao1/volume.h"

float volume_cubo(float aresta){
  return (aresta * aresta * aresta); /*!< Aplicação da fórmula para o volume do cubo */
}

float volume_piramide(float base, float altura){
	return base * altura * (1/3); /*!< Aplicação da fórmula para o volume da pirâmide de base quadrangular */
}

float volume_paralelepipedo(float aresta, float aresta2, float aresta3){
  return aresta * aresta2 * aresta3; /*!< Aplicação da fórmula para o volume do paralelepipedo */
}

float volume_esfera(float raio){
  float pi = atan(1)*4;
  return 4/3 * pi * (raio * raio * raio); /*!< Aplicação da fórmula para o volume da esfera */
}
