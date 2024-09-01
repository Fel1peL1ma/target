#include <stdio.h>

// 3 - Análise de faturamento diário
void analiseFaturamento()
{
  // Dados de faturamento diário
  double faturamento_diario[] = {1000.0, 1500.0, 0.0, 2000.0, 0.0, 2500.0};
  int tamanho = sizeof(faturamento_diario) / sizeof(faturamento_diario[0]);

  // Filtrar faturamentos positivos (dias úteis)
  double soma_faturamento = 0.0;
  int dias_uteis = 0;
  double menor_faturamento = -1;
  double maior_faturamento = -1;

  for (int i = 0; i < tamanho; i++)
  {
    if (faturamento_diario[i] > 0)
    {
      soma_faturamento += faturamento_diario[i];
      dias_uteis++;

      if (menor_faturamento == -1 || faturamento_diario[i] < menor_faturamento)
      {
        menor_faturamento = faturamento_diario[i];
      }

      if (maior_faturamento == -1 || faturamento_diario[i] > maior_faturamento)
      {
        maior_faturamento = faturamento_diario[i];
      }
    }
  }

  double media_mensal = soma_faturamento / dias_uteis;
  int dias_acima_da_media = 0;

  for (int i = 0; i < tamanho; i++)
  {
    if (faturamento_diario[i] > media_mensal)
    {
      dias_acima_da_media++;
    }
  }

  // Imprimir resultados
  printf("3) Menor faturamento: %.2f\n", menor_faturamento);
  printf("3) Maior faturamento: %.2f\n", maior_faturamento);
  printf("3) Dias acima da media: %d\n", dias_acima_da_media);
}

int main()
{
  analiseFaturamento(); // Chama a função para analisar faturamento

  system("pause");
  
  return 0;
}