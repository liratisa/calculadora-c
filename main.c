#include <stdio.h>

int main() {
    float num1, num2, soma, subtracao, multiplicacao, divisao;
    
    printf("Essa calculadora executa as quatro operações básicas");
    
    printf("\nPor favor, digite o primeiro numero:");
    scanf("%f", &num1);
    
    printf("Digite o segundo numero:");
    scanf("%f", &num2);
    
    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
    divisao = num1 / num2;
    
    printf("\nResultado da soma: %f", soma);
    printf("\nResultado da subtracao: %f", subtracao);
    printf("\nResultado da multiplicacao: %f", multiplicacao);
    printf("\nResultado da divisao: %f", divisao);
}