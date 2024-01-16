#include <stdio.h>
#include <stdlib.h>

void troca(int x, int y){
    int aux;
    aux = x;
    x = y;
    y = aux;
}

int main(int argc, char const *argv[])
{
    int v1 = 5, v2 = 10;

    printf("Antes da troca: v1=%d e v2=%d\n", v1, v2);
    troca(v1,v2);
    /*
        NÃO HOUVE MUDANÇA POIS AS VARIÁVEIS v1 e v2 FORAM APENAS COPIADAS PARA A SUB-ROTINA DA FUNÇÃO troca().
    */
    printf("Depois da troca: v1=%d e v2=%d\n", v1, v2);
    return 0;
}
