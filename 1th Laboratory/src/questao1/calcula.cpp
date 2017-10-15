/**
 * @file	calcula.cpp
 * @brief	Recebe a opção fornecida pelo usuário e a trata.
 * 		    Solicita ao usuário os dados necessários para calcular área,
 *        volume e/ou perímetro do corpo geométrico escolhido.
 *        Ao final, exibe o resultado para o usuário.
 * @author	Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since	14/08/2017
 * @date	14/08/2017
 */

#include "questao1/calcula.h"
#include "questao1/area.h"
#include "questao1/perimetro.h"
#include "questao1/volume.h"

void calcula(int opcao){
  float base;
  float altura;
  float lados;
  float raio;
  float aresta;
  float aresta2;
  float aresta3;
  /**
   * @brief Tratamento da opção do usuário
   * Pede os parâmetros necessários para cálculo de área, volume e/ou perímetro. 
  */
  switch (opcao) {
    case 1:
      std::cout << "Digite o tamanho da base do triangulo equilatero: ";
      std::cin >> base;
      std::cout << "Digite o tamanho da altura do triangulo equilatero: ";
      std::cin >> altura;
      std::cout << "Digite o tamanho do lado do triangulo equilatero: ";
      std::cin >> lados;
      std::cout << "Area do triangulo: " << area_triangulo(base, altura) << std::endl;
      std::cout << "Perimetro do triangulo: " <<  perimetro_triangulo(lados) << std::endl;
      break;
    case 2:
      std::cout << "Digite o tamanho da base do retangulo: ";
      std::cin >> base;
      std::cout << "Digite o tamanho da altura do retangulo: ";
      std::cin >> altura;
      std::cout << "Area do retangulo: " << area_retangulo(base, altura) << std::endl;
      std::cout << "Perimetro do retangulo: " <<  perimetro_retangulo(base, altura) << std::endl;
      break;
    case 3:
      std::cout << "Digite o tamanho dos lados do quadrado: ";
      std::cin >> lados;
      std::cout << "Area do quadrado: " << area_quadrado(lados) << std::endl;
      std::cout << "Perimetro do quadrado: " << perimetro_quadrado(lados) << std::endl;
      break;
    case 4:
      std::cout << "Digite o tamanho do raio do circulo: ";
      std::cin >> raio;
      std::cout << "Area do circulo: " << area_circulo(raio) << std::endl;
      std::cout << "Perimetro do circulo: " << perimetro_circulo(raio) << std::endl;
      break;
    case 5:
      std::cout << "Digite a area da base da piramide de base quadrangular: ";
      std::cin >> base;
      std::cout << "Digite a area lateral da piramide de base quadrangular: ";
      std::cin >> lados;
      std::cout << "Digite a altura da piramide de base quadrangular: ";
      std::cin >> altura;
      std::cout << "Area da piramide de base quadrangular: " << area_piramide(base, lados) << std::endl;
      std::cout << "Volume da piramide de base quadrangular: " << volume_piramide(base, altura) << std::endl;
      break;
    case 6:
      std::cout << "Digite o tamanho da aresta do cubo: ";
      std::cin >> aresta;
      std::cout << "Area do cubo: " << area_cubo(aresta) << std::endl;
      std::cout << "Volume do cubo: " << volume_cubo(aresta) << std::endl;
      break;
    case 7:
      std::cout << "Digite o tamanho da aresta 1 do paralelepipedo: ";
      std::cin >> aresta;
      std::cout << "Digite o tamanho da aresta 2 do paralelepipedo: ";
      std::cin >> aresta2;
      std::cout << "Digite o tamanho da aresta 3 do paralelepipedo: ";
      std::cin >> aresta3;
      std::cout << "Area do paralelepipedo: " << area_paralelepipedo(aresta, aresta2, aresta3) << std::endl;
      std::cout << "Volume do paralelepipedo: " <<  volume_paralelepipedo(aresta, aresta2, aresta3) << std::endl;
      break;
    case 8:
      std::cout << "Digite o tamanho do raio da esfera: ";
      std::cin >> raio;
      std::cout << "Area da esfera: " << area_esfera(raio) << std::endl;
      std::cout << "Volume da esfera: " << volume_esfera(raio) << std::endl;
      break;
    case 0:
      break;
    default:
      /*!< Caso o usuário digite um valor que não seja entre 0 e 8, exibe essa informação */
      std::cout << std::endl << "Opcao invalida, leia o menu e insira um dos valores suportados." << std::endl;
      break;
  }
}
