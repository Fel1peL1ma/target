#include <stdio.h>

// 5 - Inverter os caracteres de uma string
void inverterString(char *s)
{
    int length = 0;
    // comprimento da string
    while (s[length] != '\0')
    {
        length++;
    }

    // Inverte a string
    for (int i = 0; i < length / 2; i++)
    {
        char temp = s[i];
        s[i] = s[length - i - 1];
        s[length - i - 1] = temp;
    }
}

int main()
{
    // String a ser invertida
    char string[] = "Exemplo de string";
    inverterString(string); // Chama a função para inverter a string

    // Imprimir string invertida
    printf("5) String invertida: %s\n", string);
    
    system("pause");

    return 0;
}