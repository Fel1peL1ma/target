#include <stdio.h>

// 1 - Calcular o valor da variável SOMA
void calcularSoma()
{
  int INDICE = 13; // Definindo o valor inicial de INDICE
  int SOMA = 0;    // Inicializando SOMA com 0
  int K = 0;       // Inicializando K com 0

  // Loop para somar os valores de 1 até INDICE
  while (K < INDICE)
  {
    K = K + 1;       // Incrementa K em 1
    SOMA = SOMA + K; // Adiciona o valor de K a SOMA
  }

  // Imprimir o valor final de SOMA
  printf("1) Valor final da variavel SOMA: %d\n", SOMA);
}

int main()
{
  calcularSoma(); // Chama a função para calcular SOMA

  system("pause");
  
  return 0;
}