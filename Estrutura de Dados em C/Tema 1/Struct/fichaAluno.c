#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct fichaAluno
{
    char nome[50];
    char disciplina[30];
    float notaProva_1;
    float notaProva_2;
};

int main(int argc, char const *argv[])
{
    struct fichaAluno aluno;

    printf("\n---------- Cadastro de aluno -----------\n\n\n");
    printf("Nome do aluno ......: ");
    fflush(stdin); //Limpa o buffer do teclado
    fgets(aluno.nome, 40, stdin); //Lê um dado do teclado, com até 40 caracteres e armazena no primeiro parâmetro
    printf("Disciplina ......: ");
    fflush(stdin);
    fgets(aluno.disciplina, 40, stdin); 
    printf("Informe a 1a. nota ..: ");
    scanf("%f", &aluno.notaProva_1);
    printf("Informe a 2a. nota ..: ");
    scanf("%f", &aluno.notaProva_2);
    printf("\n\n --------- Lendo os dados da struct ---------\n\n");
    printf("Nome ...........: %s", aluno.nome);
    printf("Nota da Prova 1 ...: %.2f\n" , aluno.notaProva_1);
    printf("Nota da Prova 2 ...: %.2f\n" , aluno.notaProva_2);
    getch();
    
    return 0;
}


