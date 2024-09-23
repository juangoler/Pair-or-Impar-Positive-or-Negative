#include <stdio.h>

int main()
{
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num % 2 == 0){
        printf("Esse número é par e");
    } else {
        printf("Esse número é impar e");
    }

    if (num >= 0){
        printf(" positivo");
    } else {
        printf(" negativo");
    }

    return 0;
}