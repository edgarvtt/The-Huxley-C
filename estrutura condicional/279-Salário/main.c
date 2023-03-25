#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float hoursMoney,salary;
    int number,hours;

    scanf("%d %d %f", &number ,&hours, &hoursMoney);
    salary = hoursMoney * hours;

    printf("NUMBER = %d\n",number);
    printf("SALARY = R$ %.2f",salary);

	return 0;
}
