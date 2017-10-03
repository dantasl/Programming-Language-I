/**
 * @file	perimetro.cpp
 * @brief	Definição das funções contendo as fórmulas para calcular perímetros.
 * 		    Serve para triângulos equiláteros; retângulos; quadrados e círculos.
 * @author	Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since	14/08/2017
 * @date	14/08/2017
 */
#include "questao1/perimetro.h"

float perimetro_triangulo(float lados){
  return lados * 3; /*!< Aplicação da fórmula para o perímetro do triângulo */
}

float perimetro_retangulo(float base, float altura){
  return 2 * (base + altura); /*!< Aplicação da fórmula para o perímetro do retângulo */
}

float perimetro_quadrado(float lados){
  return 4 * lados; /*!< Aplicação da fórmula para o perímetro do quadrado */
}

float perimetro_circulo(float raio){
  float pi = atan(1)*4;
  return 2 * pi * raio; /*!< Aplicação da fórmula para o perímetro do círculo */
}
