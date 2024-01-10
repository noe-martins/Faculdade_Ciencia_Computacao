#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct
{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct
{
    int codigo;
    char nome[200];
    Data datNasc;
} Aluno;

Aluno aluno[2];
int i = 0;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL,"portuguese");

    //RESET no array de aluno
    for (i = 0; i < 2; i++)
    {
        aluno[i].codigo = 0;
        strcpy(aluno[i].nome, "NULL");
        aluno[i].datNasc.dia = 0;
        aluno[i].datNasc.mes = 0;
        aluno[i].datNasc.ano = 0;
    }


    for (i = 0; i < 2; i++)
    {
        printf(" \n ======================================================================");
        printf(" \n ======================================================================");
        printf(" \n Digite o código do aluno: ");
        scanf("%d%*c", &aluno[i].codigo);
        printf(" \n Digite o nome do aluno: ");
        scanf("%s%*c", &aluno[i].nome);
        printf(" \n Digite o dia do nascimento do aluno: ");
        scanf("%d%*c", &aluno[i].datNasc.dia);
        printf(" \n Digite o mês do nascimento do aluno: ");
        scanf("%d%*c", &aluno[i].datNasc.mes);
        printf(" \n Digite o ano do nascimento do aluno: ");
        scanf("%d%*c", &aluno[i].datNasc.ano);
    }
    
    for (i = 0; i < 2; i++){
        printf(" \n ======================================================================");
        printf(" \n O código do aluno é: %d ", aluno[i].codigo);
        printf(" \n O nome do aluno é: %s ", aluno[i].nome);
        printf(" \n A data de nascimento do aluno é: %d / %d / %d ", 
            aluno[i].datNasc.dia, aluno[i].datNasc.mes, 
            aluno[i].datNasc.ano);
        printf(" \n ");
    }

    return 0;
}

