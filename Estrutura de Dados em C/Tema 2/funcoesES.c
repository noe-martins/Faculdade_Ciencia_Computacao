#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    /*
        3 --> É UM WIDTH. Terá 3 caracteres
        .2 --> É UM PRECISION. Terá duas casas decimais
        f --> É UM TYPE. Argumento em notação decimal comum
    */
    float nota = 7.50;
    printf("Nota Aluno: %3.2f\n", nota);

    /*
        s --> É UM TYPE. Cadeia de caracteres
        x --> É UM TYPE. iInteiro na forma hexadecimal
     */
    char itens[] = "Leite";
    int contador = 2024;
    printf("Lista de itens: %s\nContador = %x", itens, contador);

    /*
        '-' --> É UMA FLAG. Posiciona o valor a esqueda
        5 --> É UM WIDTH. Número de caracteres
        d --> É UM TYPE. Inteiro decimal
    */
    int a = 2, b = 3, c = 4;
    printf ("\na: %-5d b: %-5d c: %-5d\n", a, b, c);
    
    /*
        scanf() é parecido com printf()
    */
    int i;
    scanf("%d", &i);
    printf("%d\n", i);

    /*
        Equivale ao comando: printf("%c",carac).
    */
    putchar(a);
    /*
        Equivale a: printf("%s\n", string)
    */
    puts(itens);
    /*
        Equivale à função putchar, mas em sentido inverso.
    */
    fflush(stdin);
    char carac = getchar();
    putchar(carac);

    return 0;
}
