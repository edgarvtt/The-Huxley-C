#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float raio,pi,area,areaC;

    scanf("%f",&raio);
    pi = 3.14159;
    area = pi * pow(raio,2);
    areaC = area / 10000;
    printf("Area = %.4f",areaC);

	return 0;
}
