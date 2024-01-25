#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define N 3

/* 
    CRIADO UMA ESTRUTURA COM O VETOR E UMA FLAG INDICANDO O FIM DELE
 */
typedef struct filaSequencial
{
    int vetor[N];
    int fim_vetor;
}filaSequencial;

/* 
    - RECEBE NO PARÂMETRO DA FUNÇÃO A REFERÊNCIA DE UMA VARÁVEL DO TIPO STRUCT
    - PERCORRE CADA ELEMENTO DE VETOR E O ZERA
    - ATRIBUI O VALOR DA FLAG TAMBÉM '0'
    OBS: O SINAL '->' É PORQUE ESTÁ PASSANDO O VALOR POR REFERÊNCIA NA STRUCT
 */
void inicializaFila(filaSequencial *f){
    int i;
    for (i = 0; i < N; i++)
    {
        f->vetor[i] = 0;
    }
    f->fim_vetor = 0;
}

/* 
    - FUNÇÃO RECEBE DOIS PARÂMETRO:
        - O ELEMENTO QUE SERÁ INSERIDO
        - A REFERÊNCIA NA MEMÓRIA DE UMA VARIÁVEL 'filaSequencial' DO STIPO STRUCT
    - VERIFICA SE O A FLAG 'fim_vetor' ESTÁ NO FIM DO VETOR.
    - CASO NÃO, ATRIBUI AO ÚLTIMO ELEMENTO DO VETOR O DADO INSERIDO NA FUNÇÃO
    - INCREMENTA O FIM DO VETOR
 */
void enfileira(int dado, filaSequencial *f){
    if (f->fim_vetor == N)
    {
        printf("Fila está cheia!\n");
    } else {
        f->vetor[f->fim_vetor] = dado;
        f->fim_vetor++;
    }
    
}

/* 
    - PASSA COMO PARÂMETRO DA FUNÇÃO UMA REFERÊNCIA DE MEMÓRIA DA VARIÁVEL 'filaSequenciasl' DO TIPO STRUCT
    - VERIFICA SE O FIM DO VETOR É O PRIMEIRO ELEMENTO.
        - SE SIM, NÃO TEM COMO RETIRAR ALGO DE UMA FILA QUE ESTÁ VAZIA
    - FAZ UM BACKUP DO ELEMENTO QUE IRÁ SER REMOVIDO
        - COMO ESTÁ NO COMEÇO DA FUNÇÃO, ESSE ELEMENTO É O PRIMEIRO
    - PERCORRER O VETOR ATÉ O ÚLTIMO ELEMENTO PREENCHIDO
        - ATRIBUI PARA CADA VALOR O POSTERIOR (COMO SE TIVESSE 'BAIXANDO' A FILA)
        - DECREMENTA A FLAG FIM, DESLOCANDO A FILA PARA O COMEÇO
 */
int desenfileira(filaSequencial *f){
    int backup, i;
    if (f->fim_vetor == 0)
    {
        printf("Fila está vazia!\n");
        return;
    } else {
        backup = f->vetor[0];
        for (i = 0; i < f->fim_vetor; i++)
        {
            f->vetor[i] = f->vetor[i+1];
        }
        f->fim_vetor--;
        return backup;
    }
    
}

void imprimeFila(filaSequencial *f){
    int i;
    printf("Imprimindo a fila: ");
    for (i = 0; i < f->fim_vetor; i++)
    {
        printf("%d ", f->vetor[i]);
    }
    printf("\n");
    
}

int main(int argc, char const *argv[])
{
    filaSequencial fila;

    inicializaFila(&fila);

    imprimeFila(&fila);

    enfileira(5, &fila);
    enfileira(2, &fila);
    enfileira(9, &fila);

    imprimeFila(&fila);

    int ultimoBackup = desenfileira(&fila);

    imprimeFila(&fila);
    printf("Último elemento retirado: %d\n", ultimoBackup);

    return 0;
}

