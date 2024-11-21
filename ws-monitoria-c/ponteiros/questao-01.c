#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float salario;
    printf("Entre com o valor do salario: ");
    scanf("%f", &salario);

    printf("Salario inserido: %.2f\n", salario);
    printf("Endereço de memória da variável (&salario) eh: %p\n\n", &salario);

    return 0;
}