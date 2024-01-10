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

Aluno aluno;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "portuguese");

    // RESET nos dados de aluno
    aluno.codigo = 0;
    strcpy(aluno.nome, "NULL");
    aluno.datNasc.dia = 0;
    aluno.datNasc.mes = 0;
    aluno.datNasc.ano = 0;

    printf(" \n O código do aluno é: %d ", aluno.codigo);
    printf(" \n O nome do aluno é: %s ", aluno.nome);
    printf(" \n A data de nascimento do aluno é: %d / %d / %d ", aluno.datNasc.dia, aluno.datNasc.mes, aluno.datNasc.ano);
    printf(" \n \n");

    // Cadastro do aluno
    printf(" Digite o código do aluno: ");
    scanf("%d%*c", &aluno.codigo);
    printf(" Digite o nome do aluno: ");
    scanf("%s%*c", &aluno.nome);
    printf(" Digite o dia do nascimento do aluno: ");
    scanf("%d%*c", &aluno.datNasc.dia);
    printf(" Digite o mês do nascimento do aluno: ");
    scanf("%d%*c", &aluno.datNasc.mes);
    printf(" Digite o ano do nascimento do aluno: ");
    scanf("%d%*c", &aluno.datNasc.ano);

    //Impressão dos dados atualizados
    printf(" \n O código do aluno é: %d ", aluno.codigo);
    printf(" \n O nome do aluno é: %s ", aluno.nome);
    printf(" \n A data de nascimento do aluno é: %d / %d / %d ", aluno.datNasc.dia, aluno.datNasc.mes, aluno.datNasc.ano);
    printf(" \n \n");

    return 0;
}
