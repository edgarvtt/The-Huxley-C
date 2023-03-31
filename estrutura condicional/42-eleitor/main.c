#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int idade;
    scanf("%d",&idade);

    if(idade < 16)
    printf("nao eleitor");

    if (idade >= 18 && idade <= 65)
    printf("eleitor obrigatorio");

    if (idade < 18 && idade >=16 || idade > 65)
    printf("eleitor facultativo");

	return 0;
}
