#include <stdio.h>
#include <stdlib.h>

/*
    LEITURA:
    1) A FUNÇÃO RECEBE COMO PARÂMETRO DOIS ENDEREÇOS DE MEMÓRIA DE INTEIROS
    2) ATRIBUI A VARIÁVEL LOCAL "aux" O VALOR CONTIDO DENTRO DO ENDEREÇO DE MEMÓRIA DE 'x'
    3) ATRIBUI AO VALOR CONTIDO DENTRO DO ENDEREÇO DE 'x' O VALOR CONTIDO DENTRO DO ENDEREÇO DE 'y'
    4) ATRIBUI AO VALOR CONTIDO DENTRO DO ENDEREÇO DE 'y' O VALOR CONTIDO NA VARIÁVEL 'aux'
    5) NO PROGRAMA PRINCIPAL É PASSADO COMO ARGUMENTO O ENDEREÇO DE 'v1' E 'v2' USANDO O '&'
*/
void troca(int *x, int *y){
    int aux;
    if (x != NULL && y != NULL)
    {
        aux = *x;
        *x = *y;
        *y = aux;
    }
}

int main(int argc, char const *argv[])
{
    int v1 = 5, v2 = 10;

    printf("Antes da troca: v1=%d e v2=%d\n", v1, v2);
    troca(&v1,&v2);
    printf("Depois da troca: v1=%d e v2=%d\n", v1, v2);
    return 0;
}
