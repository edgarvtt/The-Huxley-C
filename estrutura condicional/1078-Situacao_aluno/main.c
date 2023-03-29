#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float A,B,C,nota;
    scanf("%f %f %f", &A,&B,&C);
    nota = (A+B+C)/3;
    scanf("%f",&nota);

    if(nota >= 70 && nota <= 100 )
    printf("A media do aluno foi %.2f e ele foi APROVADO",nota);

    if(nota < 70 && nota > 40 )
    printf("A media do aluno foi %.2f e ele foi FINAL",nota);

    if(nota >= 0 && nota <= 40)
    printf("A media do aluno foi %.2f e ele foi REPROVADO",nota);

    if(nota < 0)
    printf("Media invalida");

	return 0;
}
