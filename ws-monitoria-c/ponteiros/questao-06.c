#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");    

    int a;
    int b;

    int *pA;

    printf("Entre com o valor de A: ");
    scanf("%d", &a);

    pA = &a;
    b = *pA;

    printf("Valor de a = %d\n", a);
    printf("Valor de b com ponteiro de a: %d\n", b);
    return 0;
}