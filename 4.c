#include <stdio.h>

// 4 - Cálculo do percentual de representação de cada estado
void calcularPercentual()
{
  // Faturamento por estado
  float faturamento_SP = 67836.43;
  float faturamento_RJ = 36678.66;
  float faturamento_MG = 29229.88;
  float faturamento_ES = 27165.48;
  float faturamento_Outros = 19849.53;

  // Valor total do faturamento mensal
  float total_mensal = faturamento_SP + faturamento_RJ + faturamento_MG + faturamento_ES + faturamento_Outros;

  // Imprimir percentual de cada estado
  printf("4) SP: %.2f%%\n", (faturamento_SP / total_mensal) * 100);
  printf("4) RJ: %.2f%%\n", (faturamento_RJ / total_mensal) * 100);
  printf("4) MG: %.2f%%\n", (faturamento_MG / total_mensal) * 100);
  printf("4) ES: %.2f%%\n", (faturamento_ES / total_mensal) * 100);
  printf("4) Outros: %.2f%%\n", (faturamento_Outros / total_mensal) * 100);
}

int main()
{
  calcularPercentual(); // Chama a função para calcular percentual

  system("pause");
  
  return 0;
}