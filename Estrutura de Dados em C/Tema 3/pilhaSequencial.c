#include <stdio.h>
#include <stdlib.h>

const int MAX_PILHA = 5;
int topo = NULL;

int main(int argc, char const *argv[])
{
    int vetor[MAX_PILHA];

    push(vetor, 5);
    imprime(vetor);

    push(vetor, 7);
    imprime(vetor);

    push(vetor, 25);
    imprime(vetor);

    //DESEMPILHAR
    pop(vetor);
    imprime(vetor);

    pop(vetor);
    imprime(vetor);

    return 0;
}

//FUNÇÃO DE EMPILHAMENTO
int push (int vetor[], int elemento){
    if (vetor[0] == NULL)
    {
        vetor[0] = elemento;
    }
    else if (topo < (MAX_PILHA - 1))
    {
        topo++;
        vetor[topo] = elemento;
        return 1;
    } else {
        return 0;
    }
    
}

//FUNÇÃO DE DESEMPILHAMENTO
int pop(int vetor[]){
    int elementoRecuperado;
    if (topo >= 0)
    {
        elementoRecuperado = vetor[topo];
        topo--;
        return 1;
    } else{
        return 0;
    }
    
}

//FUNÇÃO PARA IMPRIMIR PILHA
void imprime(int vetor[]){
    for (int i = 0; i < topo+1; i++)
    {
        printf("%d, ", vetor[i]);
    }
    printf("\n");
}
