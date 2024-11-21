#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    float media;
    float *ptrMedia;

    printf("Entre com sua média: ");
    scanf("%f", &media);

    ptrMedia = &media;
    *ptrMedia += 1;

    printf("Média com acréscimo de uma unidade: %.2f\n", media);
    return 0;
}