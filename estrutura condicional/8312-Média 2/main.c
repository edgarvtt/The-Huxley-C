#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float A,B,C,nota;
    scanf("%f %f %f", &A,&B,&C);
    A *= 2;
    B *= 3;
    C *= 5;
    nota = (A+B+C)/(2+3+5);
    printf("MEDIA = %.1f",nota);

	return 0;
}
