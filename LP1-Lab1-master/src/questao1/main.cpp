/**
 * @file	main.cpp
 * @brief	Função principal, responsável por exibir o menu e receber a opção do usuário.
 * @author	Lucas Gomes Dantas (dantaslucas@ufrn.edu.br)
 * @since	14/08/2017
 * @date	14/08/2017
 */
#include <iostream>
#include "questao1/calcula.h"
int main(){
  int opcao;
  opcao = 1;
  /**
   * @brief Exibe menu e recebe a opção do usuário.
   *        Repete até usuário entrar com o 0 (opção de sair).
  */
  while (opcao != 0) {
    std::cout << std::endl << "Calculadora de Geometria Plana e Espacial" << std::endl;
    std::cout << "(1) Triangulo equilatero" << std::endl;
    std::cout << "(2) Retangulo" << std::endl;
    std::cout << "(3) Quadrado" << std::endl;
    std::cout << "(4) Circulo" << std::endl;
    std::cout << "(5) Piramide com base quadrangular" << std::endl;
    std::cout << "(6) Cubo" << std::endl;
    std::cout << "(7) Paralelepipedo" << std::endl;
    std::cout << "(8) Esfera" << std::endl;
    std::cout << "(0) Sair" << std::endl;

    std::cout << std::endl << "Digite a sua opcao: ";
    std::cin >> opcao;
    calcula(opcao); /*!< Chama a função responsável por tratar e encaminhar a escolha do usuário */
  }
}
