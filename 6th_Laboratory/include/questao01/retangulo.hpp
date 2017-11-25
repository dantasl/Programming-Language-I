/**
 * @file    retangulo.hpp
 * @author  Lucas Gomes Dantas
 * @since   24/11/2017
 * @date    24/11/2017
 */

namespace geometria 
{
	#ifndef _RETANGULO_H_
	#define _RETANGULO_H_

	#include "corpo_geometrico.hpp"

	class Retangulo : public geometria::Corpo_Geometrico
	{
		private:
			float base;
			float altura;
		public:
			/**
			 * @brief      Construtor padrão. Inicializa os atributos.
			 *
			 * @param[in]  b     Valor da base.
			 * @param[in]  a     Valor da altura.
			 */
			Retangulo(float b = 0, float a = 0) : base(b), altura(a) {}

			/**
			 * @brief      Destrutor padrão.
			 */
			~Retangulo() {}

			/**
			 * @brief      Getter para atributo base.
			 *
			 * @return     A base.
			 */
			float getBase() { return base; }

			/**
			 * @brief      Getter para atributo altura.
			 *
			 * @return     A altura.
			 */
			float getAltura() { return altura; }

			/**
			 * @brief      Setter para atributo base.
			 *
			 * @param[in]  b     Valor da base.
			 */
			void setBase(float b) { base = b; }

			/**
			 * @brief      Setter para atributo altura.
			 *
			 * @param[in]  a     Valor da altura.
			 */
			void setAltura(float a) { altura = a; }

			/**
			 * @brief      Aplica fórmula matemática para cálculo da área do
			 *             retangulo.
			 *
			 * @return     Área do retângulo.
			 */
			float area_retangulo() { return base * altura; }

			/**
			 * @brief      Aplica fórmula matemática para cálculo do perímetro
			 *             do retangulo.
			 *
			 * @return     Perímetro do retângulo.
			 */
			float perimetro_retangulo() { return 2 * (base + altura); }
	};

	#endif
}		