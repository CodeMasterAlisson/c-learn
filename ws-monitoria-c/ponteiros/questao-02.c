#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float base = 0;
    float altura = 0;
    float area = 0;

    float *ptrBase, *ptrAltura;

    printf("Entre com a base e altura do triângulo: ");
    scanf("%f%f", &base, &altura);

    ptrBase = &base;
    ptrAltura = &altura;

    area = (*ptrBase * *ptrAltura) / 2;
    printf("valor calculado da área: %.2f\n", area);

    return 0;
}