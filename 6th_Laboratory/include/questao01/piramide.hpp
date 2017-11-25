/**
 * @file    piramide.hpp
 * @author  Lucas Gomes Dantas
 * @since   24/11/2017
 * @date    24/11/2017
 */

namespace geometria 
{
	#ifndef _PIRAMIDE_H_
	#define _PIRAMIDE_H_

	#include "corpo_geometrico.hpp"

	class Piramide : public geometria::Corpo_Geometrico
	{
		private:
			float base;
			float lateral;
			float altura;
		public:
			/**
			 * @brief      Construtor padrão. Inicializa os atributos.
			 *
			 * @param[in]  b     Valor da base.
			 * @param[in]  l     Valor da lateral.
			 * @param[in]  a     Valor da altura.
			 */
			Piramide( float b = 0, float l = 0, float a = 0 )
			: base(b)
			, lateral(l)
			, altura(a)
			{}

			/**
			 * @brief      Destrutor padrão.
			 */
			~Piramide() {}

			/**
			 * @brief      Getter para atributo base.
			 *
			 * @return     Atributo base.
			 */
			float getBase() { return base; }

			/**
			 * @brief      Getter para atributo lateral.
			 *
			 * @return     Atributo lateral.
			 */
			float getLateral() { return lateral; }

			/**
			 * @brief      Getter para atributo altura.
			 *
			 * @return     Atributo altura.
			 */
			float getAltura() { return altura; }

			/**
			 * @brief      Setter para atributo base.
			 *
			 * @param[in]  b     Novo valor do atributo base.
			 */
			void setBase(float b) { base = b; }

			/**
			 * @brief      Setter para atributo lateral.
			 *
			 * @param[in]  b     Novo valor do atributo lateral.
			 */
			void setLateral(float l) { lateral = l; }

			/**
			 * @brief      Setter para atributo altura.
			 *
			 * @param[in]  b     Novo valor do atributo altura.
			 */
			void setAltura(float a) { altura = a; }

			/**
			 * @brief      Aplica a fórmula matemática para calcular a área da
			 *             pirâmide conhecendo sua base e lateral.
			 *
			 * @return     Valor da área da pirâmide.
			 */
			float area_piramide()
			{
				return base + lateral;
			}

			/**
			 * @brief      Aplica a fórmula matemática para calcular o volume da
			 *             pirâmide conhecendo sua base e altura.
			 *
			 * @return     Valor do volume da pirâmide.
			 */
			float volume_piramide()
			{
				return base * altura * (1/3);
			}	
	};

	#endif
}	