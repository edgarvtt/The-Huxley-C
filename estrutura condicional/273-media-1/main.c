#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float nota1,nota2,media;

    scanf("%f\n",&nota1);
    scanf("%f\n",&nota2);
    nota1 *= 3.5;
    nota2 *= 7.5;
    media = (nota1 + nota2)/(3.5+7.5);
    printf("MEDIA = %.5f\n", media);

	return 0;
}
