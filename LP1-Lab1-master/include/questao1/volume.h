/**
 * @file	volume.h
 * @brief	Definição dos protótipos das funções para calcular volumes.
 * 		    Especifica as funções para o cálculo dos volumes dos cubos;
 *        paralelepipedos; esferas e pirâmides com bases quadrangulares.
 * @author	Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since	14/08/2017
 * @date	14/08/2017
 */

#ifndef VOLUME_H
#define VOLUME_H

#include <cmath>

/**
 * @brief Calcula o volume de um cubo
 * @param aresta Tamanho das arestas que compõem o cubo
 * @return Volume do cubo
 */
float volume_cubo(float aresta);

/**
 * @brief Calcula o volume de um paralelepipedo
 * @param aresta Tamanho da primeira aresta que compõe o paralelepipedo
 * @param aresta2 Tamanho da segunda aresta que compõe o paralelepipedo
 * @param aresta3 Tamanho da terceira aresta que compõe o paralelepipedo
 * @return Volume do paralelepipedo
 */
float volume_paralelepipedo(float aresta, float aresta2, float aresta3);

/**
 * @brief Calcula o volume de uma esfera
 * @param raio Tamanho do raio que compõe a esfera
 * @return Volume da esfera
 */
float volume_esfera(float raio);

/**
 * @brief Calcula o volume de uma pirâmide de base quadrangular
 * @param base Tamanho da base da pirâmide
 * @param altura Tamanho da altura da pirâmide
 * @return Volume da pirâmide de base quadrangular
 */
float volume_piramide(float base, float altura);

#endif