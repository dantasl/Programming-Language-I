/**
 * @file	perimetro.h
 * @brief	Definição dos protótipos das funções para calcular perimetros.
 * 		    Especifica as funções para o cálculo dos perimetros dos triângulos equiláteros;
 *        retângulos; quadrados e círculos.
 * @author	Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since	14/08/2017
 * @date	14/08/2017
 */

#ifndef PERIMETRO_H
#define PERIMETRO_H
#include <cmath>

/**
 * @brief Calcula o perímetro de um triângulo equiláterio
 * @param lados Tamanho dos lados que compõem o triângulo equiláterio
 * @return Perímetro do triângulo
 */
float perimetro_triangulo(float lados);

/**
 * @brief Calcula o perímetro de um retângulo
 * @param base Tamanho da base do retângulo
 * @param altura Tamanho da altura do retângulo
 * @return Perímetro do retângulo
 */
float perimetro_retangulo(float base, float altura);

/**
 * @brief Calcula o perímetro de um quadrado
 * @param lados Tamanho dos lados que compõem o quadrado
 * @return Perímetro do quadrado
 */
float perimetro_quadrado(float lados);

/**
 * @brief Calcula o perímetro de um círculo
 * @param raio Tamanho do raio que compõe a circunferência
 * @return Perímetro do círculo
 */
float perimetro_circulo(float raio);

#endif