#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float salario = 0.0;
    float *ptrSalario;

    printf("Entre com o salário: ");
    scanf("%f", &salario);

    ptrSalario = &salario;
    *ptrSalario = *ptrSalario * 1.10;

    printf("Valor calculdo com acréscimo de 10%% eh: %.2f\n", salario);

    return 0;
}