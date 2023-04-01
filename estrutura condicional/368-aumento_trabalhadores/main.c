#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float x,aumento,y;
    scanf("%f", &x);

    if(x > 500)
    aumento = (x * 10) / 100;
    y = aumento + x;

    if(x > 300 && x <= 500)
    aumento = (x * 7) / 100;
    y = aumento + x;

    if(x <= 300)
    aumento = (x * 5) / 100;
    y = aumento + x;


    printf("%.2f",y);

	return 0;
}
