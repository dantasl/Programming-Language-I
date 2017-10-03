/**
 * @file	area.cpp
 * @brief	Definição das funções contendo as fórmulas para calcular áreas.
 * 		    Serve para triângulos equiláteros; retângulos; quadrados; círculos;
 *        cubos; esferas; paralelepipedos e pirâmides quadrangular.
 * @author	Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since	14/08/2017
 * @date	14/08/2017
 */

#include "questao1/area.h"

float area_triangulo(float base, float altura){
  return (base * altura)/2; /*!< Aplicação da fórmula para a área do triângulo */
}

float area_retangulo(float base, float altura){
  return base * altura; /*!< Aplicação da fórmula para a área do retângulo */
}

float area_quadrado(float lados){
  return lados * lados; /*!< Aplicação da fórmula para a área do quadrado */
}

float area_piramide(float base, float lateral){
	return base + lateral; /*!< Aplicação da fórmula para área da pirâmide de base quadrangular */
}

float area_circulo(float raio){
  float pi = atan(1)*4;
  return pi * (raio * raio); /*!< Aplicação da fórmula para a área do círculo */
}

float area_cubo(float aresta){
  return 6 * (aresta * aresta); /*!< Aplicação da fórmula para a área do cubo */
}

float area_paralelepipedo(float aresta, float aresta2, float aresta3){
  return (2 * aresta * aresta2) + (2 * aresta * aresta3) + (2 * aresta2 * aresta3); /*!< Aplicação da fórmula para a área do paralelepipedo */
}

float area_esfera(float raio){
  float pi = atan(1)*4;
  return 4 * pi * (raio * raio); /*!< Aplicação da fórmula para a área da esfera */
}
