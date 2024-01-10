// Cria uma estrutua para rmazenar dados de um aluno
#include <stdio.h>
#include <stdlib.h>

/* Criação da struct*/
struct aluno
{
    int v_nmat; // número da matricula
    float v_nota[3]; //notas
    float v_media; //média
};

int main(int argc, char const *argv[])
{
    struct aluno Noah;

    Noah.v_nmat = 120;
    Noah.v_nota[0] = 8.5;
    Noah.v_nota[1] = 7.5;
    Noah.v_nota[2] = 6.5;

    float sum = 0.0;
    for (int i = 0; i < 3; i++)
    {
        sum += Noah.v_nota[i];
    }
    Noah.v_media = sum/3.0;

    printf("Matricula: %d\n", Noah.v_nmat);
    printf("Media: %.2f\n", Noah.v_media);
    
    return 0;
}

