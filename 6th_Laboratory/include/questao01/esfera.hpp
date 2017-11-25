/**
 * @file    esfera.hpp
 * @author  Lucas Gomes Dantas
 * @since   24/11/2017
 * @date    24/11/2017
 */

namespace geometria 
{
	#ifndef _ESFERA_H_
	#define _ESFERA_H_
	#define PI 3.14159265

	#include "corpo_geometrico.hpp"

	class Esfera : public geometria::Corpo_Geometrico
	{
		private:
			float raio;
		public:
			/**
			 * @brief      Construtor padrão da Esfera. Inicializa atributo raio com um valor.
			 *
			 * @param[in]  r     Valor do raio da esfera.
			 */
			Esfera(float r = 0) : raio(r) {}

			/**
			 * @brief      Destrutor padrão.
			 */
			~Esfera() {}

			/**
			 * @brief      Getter para o atributo raio.
			 *
			 * @return     O atributo raio.
			 */
			float getRaio() { return raio; }

			/**
			 * @brief     Setter para atributo raio.
			 *
			 * @param[in]  r     Novo valor do atributo raio.
			 */
			void setRaio(float r) { raio = r; }

			/**
			 * @brief      Aplica a fórmula matemática para calcular a area de uma esfera.
			 *
			 * @return     Valor da area da esfera.
			 */
			float area_esfera() { return 4 * PI * (raio * raio); }

			/**
			 * @brief      Aplica a fórmula matemática para calcular o volume de uma esfera.
			 *
			 * @return     Valor do volume da esfera.
			 */
			float volume_esfera() { return 4/3 * PI * (raio * raio * raio); }
	};

	#endif
}	