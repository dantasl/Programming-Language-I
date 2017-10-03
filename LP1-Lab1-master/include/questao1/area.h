/**
 * @file	area.h
 * @brief	Definição dos protótipos das funções para calcular áreas.
 * 		    Especifica as funções para o cálculo das áreas dos triângulos equiláteros;
 *        retângulos; quadrados; círculos; cubos; esferas; paralelepipedos e pirâmides quadrangular.
 * @author	Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since	14/08/2017
 * @date	14/08/2017
 */

#ifndef AREA_H
#define AREA_H
#include <cmath>

/**
 * @brief Calcula a área de um triângulo equiláterio
 * @param base Tamanho da base do triangulo
 * @param altura Tamanho da altura do triangulo
 * @return Área do triângulo
 */
float area_triangulo(float base, float altura);

/**
 * @brief Calcula a área de um retângulo
 * @param base Tamanho da base do retângulo
 * @param altura Tamanho da altura do retângulo
 * @return Área do retângulo
 */
float area_retangulo(float base, float altura);

/**
 * @brief Calcula a área de um quadrado
 * @param lados Tamanho dos lados que compõem o quadrado
 * @return Área do quadrado
 */
float area_quadrado(float lados);

/**
 * @brief Calcula a área de um círculo
 * @param raio Tamanho do raio da circunferência
 * @return Área do círculo
 */
float area_circulo(float raio);

/**
 * @brief Calcula a área de uma pirâmide de base quadrangular
 * @param base Tamanho da base da pirâmide
 * @param lateral Tamanho da área lateral da pirâmide
 * @return Área da pirâmide de base quadrangular
 */
float area_piramide(float base, float lateral);

/**
 * @brief Calcula a área de um cubo
 * @param aresta Tamanho das arestas que compõem o cubo
 * @return Área do cubo
 */
float area_cubo(float aresta);

/**
 * @brief Calcula a área de um paralelepipedo
 * @param aresta Tamanho da primeira aresta do paralelepipedo
 * @param aresta2 Tamanho da segunda aresta do paralelepipedo
 * @param aresta3 Tamanho da terceira aresta do paralelepipedo
 * @return Área do paralelepipedo
 */
float area_paralelepipedo(float aresta, float aresta2, float aresta3);

/**
 * @brief Calcula a área de uma esfera
 * @param raio Tamanho do raio que compõe a esfera
 * @return Área da esfera
 */
float area_esfera(float raio);

#endif