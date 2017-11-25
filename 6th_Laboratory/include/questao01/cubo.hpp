/**
 * @file    cubo.hpp
 * @author  Lucas Gomes Dantas
 * @since   24/11/2017
 * @date    24/11/2017
 */

namespace geometria 
{
	#ifndef _CUBO_H_
	#define _CUBO_H_

	#include "corpo_geometrico.hpp"

	class Cubo : public geometria::Corpo_Geometrico
	{
		private:	
			float aresta;
		public:
			/**
			 * @brief      Construtor padrão. Inicializa o atributo aresta.
			 *
			 * @param[in]  a     Valor do atributo aresta.
			 */
			Cubo(float a = 0) : aresta(a) {}

			/**
			 * @brief      Destrutor padrão.
			 */
			~Cubo() {}

			/**
			 * @brief      Getter para atributo aresta.
			 *
			 * @return     O atributo aresta.
			 */
			float getAresta() { return aresta; }

			/**
			 * @brief      Setter para atributo aresta.
			 *
			 * @param[in]  a     Novo valor para a aresta.
			 */
			void setAresta(float a) { aresta = a; }

			/**
			 * @brief      Calcula a área de um cubo, aplicando a devida fórmula matemática.
			 *
			 * @return     O valor da área do cubo.
			 */
			float area_cubo() { return 6 * (aresta * aresta); }

			/**
			 * @brief      Calcula o volume de um cubo, aplicando a devida fórmula matemática.
			 *
			 * @return     O valor do volume do cubo.
			 */
			float volume_cubo() { return (aresta * aresta * aresta); }
	};

	#endif
}	