#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {


    int estudante,idoso,meiaEntrada;
    scanf("%d %d",&estudante,&idoso);

    if(estudante == 1 || idoso == 1)
    meiaEntrada = 1;

    if(estudante != 1 && idoso != 1)
    meiaEntrada = 0;

    printf("%d",meiaEntrada);


}
