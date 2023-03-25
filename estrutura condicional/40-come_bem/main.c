#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float x,conta;

    scanf("%f", &x);
    conta = ((x * 10 ) / 100) + x;
    printf("%.2f", conta);

	return 0;
}
