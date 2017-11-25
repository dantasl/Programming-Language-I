/**
 * @file circulo.hpp
 * @author  Lucas Gomes Dantas
 * @since   24/11/2017
 * @date    24/11/2017
 */

namespace geometria 
{
	#ifndef _CIRCULO_H_
	#define _CIRCULO_H_

	#define PI 3.14159265

	#include "corpo_geometrico.hpp"

	class Circulo : public geometria::Corpo_Geometrico
	{
		private:
			float raio;
		public:
			/**
			 * @brief      Construtor padrão. Inicia o valor do raio.
			 *
			 * @param[in]  r     Raio. Caso o usuário não digite algo, 0 é o padrão.
			 */
			Circulo(float r = 0) : raio(r) {}

			/**
			 * @brief      Destrutor padrão.
			 */
			~Circulo() {}

			/**
			 * @brief      Getter do raio.
			 *
			 * @return     Atributo raio.
			 */
			float getRaio() { return raio; }

			/**
			 * @brief      Setter do raio.
			 *
			 * @param[in]  r     Novo valor do raio.
			 */
			void setRaio(float r) { raio = r; }

			/**
			 * @brief      Calcula a área do circulo aplicando a fórmula matemática.
			 * 
			 * @return     Valor da área do círculo.
			 */
			float area_circulo() { return PI * (raio * raio); }

			/**
			 * @brief      Calcula o perímetro do círculo aplicando a fórmula matemática.
			 *
			 * @return     { description_of_the_return_value }
			 */
			float perimetro_circulo() { return 2 * PI * raio; }
	};

	#endif
}	