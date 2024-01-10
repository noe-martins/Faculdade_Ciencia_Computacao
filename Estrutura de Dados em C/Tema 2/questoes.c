#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int x, *y, z;
    x = 5;
    y = &x;
    z = 10;

    scanf("%d", y); //AQUI É COLOCADO NO VALOR QUE ESSE PONTEIRO ESTÁ APONTANDO
    printf("%d %d", y, x);
    return 0;
}
