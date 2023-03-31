#include <stdio.h>
#include <stdlib.h>

void crescente(int x){

    if (x == 0)
    printf("%d ",x);
    else {
    crescente(x-1);
    printf(" %d ", x);
    }
}

void decrescente(int w){

    if(w == 0)
    printf("%d ",w);
    else {

    printf(" %d ",w);
    decrescente(w-1);


    }

}

int main(){

    int y;
    printf("digite um numero qualquer: ");
    scanf("%d",&y);

    crescente(y);
    printf("\n");
    decrescente(y);

    return 0;
}
