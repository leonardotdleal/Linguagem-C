#include <stdio.h>
#include <stdlib.h>
#include "listag.h"

void meuCallback(void* par) {
    float *v = (float*) par;
    printf(“%f\n”, v);
}

int main(int argc, char *argv[]){
    Lista *l = cria();
    //Insere dados na lista...
    percorre(l, meuCallback); //Passando a função como parâmetro
}
