#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int year,calc;

    scanf("%d",&year);
    calc = year * 31536000;
    printf("%d", calc);
	return 0;
}
