/**
 * @file    triangulo.hpp
 * @author  Lucas Gomes Dantas
 * @since   24/11/2017
 * @date    24/11/2017
 */

namespace geometria 
{
	#ifndef _TRIANGULO_H_
	#define _TRIANGULO_H_

	#include "corpo_geometrico.hpp"

	class Triangulo_Equilatero : public geometria::Corpo_Geometrico
	{
		private:
			float base;
			float altura;
			float lados;
		public:
			/**
			 * @brief      Construtor padrão. Iniciliza os atributos.
			 *
			 * @param[in]  b     Valor da base.
			 * @param[in]  a     Valor da altura.
			 * @param[in]  l     Valor dos lados.
			 */
			Triangulo_Equilatero(float b = 0, float a = 0, float l = 0)
			: base(b), altura(a), lados(l) 
			{}

			/**
			 * @brief      Destrutor padrão.
			 */
			~Triangulo_Equilatero() {}

			/**
			 * @brief      Getter para atributo base.
			 *
			 * @return     Atributo base.
			 */
			float getBase() { return base; }

			/**
			 * @brief      Getter para atributo altura.
			 *
			 * @return     Atributo altura.
			 */
			float getAltura() { return altura; }

			/**
			 * @brief      Getter para atributo lados.
			 *
			 * @return     Atributo lados.
			 */
			float getLados() { return lados; }

			/**
			 * @brief      Setter para atributo base.
			 *
			 * @param[in]  b     Novo valor da base.
			 */
			void setBase(float b) { base = b; }

			/**
			 * @brief      Setter para atributo altura.
			 *
			 * @param[in]  a     Novo valor da altura.
			 */
			void setAltura(float a) { altura = a; }

			/**
			 * @brief      Setter para atributo lados.
			 *
			 * @param[in]  l     Novo valor dos lados.
			 */
			void setLados(float l) { lados = l; }

			/**
			 * @brief      Aplica fórmula matemática para cálculo da área de um
			 *             triangulo, conhecendo sua base e altura.
			 *
			 * @return     Área do triângulo.
			 */
			float area_triangulo() { return (base * altura)/2; }

			/**
			 * @brief      Aplica fórmula matemática para cálculo do perímetro
			 *             de um triangulo, conhecendo seus lados.
			 *
			 * @return     Perímetro de um triângulo.
			 */
			float perimetro_triangulo() { return lados * 3; }
	};

	#endif
}