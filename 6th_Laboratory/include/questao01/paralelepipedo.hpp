/**
 * @file    paralelepipedo.hpp
 * @author  Lucas Gomes Dantas
 * @since   24/11/2017
 * @date    24/11/2017
 */

namespace geometria 
{
	#ifndef _PARALELEPIPEDO_H_
	#define _PARALELEPIPEDO_H_

	#include "corpo_geometrico.hpp"

	class Paralelepipedo : public geometria::Corpo_Geometrico
	{
		private:
			float aresta;
			float aresta2;
			float aresta3;
		public:
			/**
			 * @brief      Construtor padrão. Inicializa atributos.
			 *
			 * @param[in]  a     Valor da primeira aresta.
			 * @param[in]  a2    Valor da segunda aresta.
			 * @param[in]  a3    Valor da terceira aresta.
			 */
			Paralelepipedo( float a = 0, float a2 = 0, float a3 = 0 )
			: aresta(a)
			, aresta2(a2)
			, aresta3(a3)
			{}

			/**
			 * @brief      Destrutor padrão.
			 */
			~Paralelepipedo() {}

			/**
			 * @brief      Getter para a primeira aresta.
			 *
			 * @return     A primeira aresta.
			 */
			float getAresta() { return aresta; }

			/**
			 * @brief      Getter para a segunda aresta.
			 *
			 * @return     A segunda aresta.
			 */
			float getAresta2() { return aresta2; }

			/**
			 * @brief      Getter para a terceira aresta.
			 *
			 * @return     A terceira aresta.
			 */
			float getAresta3() { return aresta3; }

			/**
			 * @brief      Setter para a primeira aresta.
			 *
			 * @param[in]  a     Valor da nova primeira aresta.
			 */
			void setAresta(float a) { aresta = a; }

			/**
			 * @brief      Setter para a segunda aresta.
			 *
			 * @param[in]  a2     Valor da nova segunda aresta.
			 */
			void setAresta2(float a2) { aresta2 = a2; }

			/**
			 * @brief      Setter para a terceira aresta.
			 *
			 * @param[in]  a3     Valor da nova terceira aresta.
			 */
			void setAresta3(float a3) { aresta3 = a3; }
			
			/**
			 * @brief      Aplica a fórmula matemática para calcular a área de
			 *             um paralepipedo conhecendo suas tres arestas.
			 *
			 * @return     Area do paralelepipedo.
			 */
			float area_paralelepipedo()
			{ 
				return (2 * aresta * aresta2) + (2 * aresta * aresta3) + (2 * aresta2 * aresta3); 
			}

			/**
			 * @brief      Aplica a fórmula matemática para calcular o volume de
			 *             um paralelepípedo conhecendo suas tres arestas.
			 *             
			 * @return     Volume do paralelepipedo.
			 */
			float volume_paralelepipedo()
			{
				return aresta * aresta2 * aresta3;
			}
	};

	#endif
}	