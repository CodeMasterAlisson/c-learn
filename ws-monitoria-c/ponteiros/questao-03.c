#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float altura = 0;
    float largura = 0;
    float area = 0;

    float *ptrAltura, *ptrLargura;

    printf("\nEntre com a altura e largura do retângulo: ");
    scanf("%f%f", &altura, &largura);

    ptrAltura = &altura;
    ptrLargura = &largura;

    area = (*ptrAltura) * (*ptrLargura);
    
    printf("Valor calculado da área do retângulo: %.2f\n", area);

    return 0;
}