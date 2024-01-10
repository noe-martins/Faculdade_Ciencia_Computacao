#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    /* Declaramos as variáveis que serão utilizadas */
    char arquivo[] = "C:/Users/noex_/OneDrive/Documentos/Programas em C/Faculdade/Estrutuda de Dados/Estrutura de Dados em C/Tema 2/arquivo.txt";
    char texto[100];

    /* Declaramos um ponteiro(link para o endereço da memória) para o arquivo de nome: 'pFile'*/
    FILE *pFile;

    /* Esta é a função de abertura de arquivos. Com modo 'w'(Abrir um arquivo texto para gravação. Se o arquivo não existir, ele será criado.
        Se já existir, o conteúdo anterior será destruído.) */
    pFile = fopen(arquivo, "w");

    /* Se o arquivo for não-vazio */
    if (pFile != NULL) {

        /* Escrevemos na tela a pergunta para o que deseja ler no arquivo (ESPAÇOS EM BRANCO FINALIZARÁ o texto) */
        printf("Digite o que você deseja pôr no arquivo(SEM ESPAÇOS): \n");

        /* Gravamos o que o usuário digitar e guardamos na variável 'texto' */
        scanf("%s", &texto);

        /*Escreve uma string(da variável 'texto') num arquivo. */
        fputs(texto, pFile);

        /* Quando acabamos de usar um arquivo que abrimos, devemos fechá-lo. Para tanto usa-se a função fclose() */
        fclose(pFile);
    }
    return 0;
}
