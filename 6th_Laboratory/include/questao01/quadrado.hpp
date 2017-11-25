/**
 * @file    quadrado.hpp
 * @author  Lucas Gomes Dantas
 * @since   24/11/2017
 * @date    24/11/2017
 */

namespace geometria 
{
	#ifndef _QUADRADO_H_
	#define _QUADRADO_H_

	#include "corpo_geometrico.hpp"

	class Quadrado : public geometria::Corpo_Geometrico
	{
		private:
			float lado;
		public:
			/**
			 * @brief      Construtor padrão. Inicializa os atributos.
			 *
			 * @param[in]  l     Valor do lado.
			 */
			Quadrado( float l = 0) : lado(l) {}

			/**
			 * @brief      Destrutor padrão.
			 */
			~Quadrado() {}

			/**
			 * @brief      Getter para atributo lado.
			 *
			 * @return     O atributo lado.
			 */
			float getLado() { return lado; }

			/**
			 * @brief     Setter para atributo lado.
			 *
			 * @param[in]  l     Novo valo para o lado.
			 */
			void setLado(float l) { lado = l; }

			/**
			 * @brief      Aplica a fórmula matemática para calcular a área de
			 *             um quadrado.
			 *
			 * @return     Área do quadrado.
			 */
			float area_quadrado() { return lado * lado; }

			/**
			 * @brief      Aplica fórmula matemática para calcular o perimetro
			 *             de um quadrado.
			 *
			 * @return     Perímetro do quadrado.
			 */
			float perimetro_quadrado() { return lado * 4; }

	};

	#endif
}	