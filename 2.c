#include <stdio.h>
#include <stdbool.h>

// 2 - Verificar se um número pertence à sequência de Fibonacci
bool fibonacci(int n)
{
  int a = 0, b = 1; // Inicializa os dois primeiros números da sequência
  // Gerar números da sequência até que o número seja alcançado ou ultrapassado
  while (a < n)
  {
    int temp = a;
    a = b;
    b = temp + b; // Atualiza a e b para os próximos números da sequência
  }
  // Verificar se o número pertence à sequência
  return a == n;
}

int main()
{
  // Número a ser verificado
  int numero = 21;

  // Verificar e imprimir resultado
  if (fibonacci(numero))
  {
    printf("2) O numero %d pertence a sequencia de Fibonacci.\n", numero);
  }
  else
  {
    printf("2) O número %d não pertence à sequência de Fibonacci.\n", numero);
  }

  system("pause");
  
  return 0;
}