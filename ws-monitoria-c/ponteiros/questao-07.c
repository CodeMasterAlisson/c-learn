#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float n1, n2;
    float *ptrN1, *ptrN2;

    printf("Entre com duas notas: ");
    scanf("%f%f", &n1, &n2);

    ptrN1 = &n1;
    ptrN2 = &n2;

    printf("\tNotas antes\n");
    printf("Nota 1: %.2f\n", n1);
    printf("Nota 2: %.2f\n", n2);
    printf("---------------------------\n");

    *ptrN1 = *ptrN1 + *ptrN2;
    *ptrN2 = *ptrN1 - *ptrN2;
    *ptrN1 = *ptrN1 - *ptrN2;

    printf("\tNotas trocadas:\n");
    printf("Nota do aluno 1: %.2f\n", n1);
    printf("Nota do aluno 2: %.2f\n", n2);
    printf("---------------------------\n");

    return 0;
}