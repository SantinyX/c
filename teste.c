/*ESTUDO ACERCA DE ESTRUTURAS DADOS HETEROGÊNEAS*/
/*EMPREGANDO PONTEIROS*/
#include <stdio.h>

static int a = 0; // variável global, alocação estática

void incrementa(void) // função
{
    int b = 0;        // variável local, alocação automática
    static int c = 0; // variável local, alocação estática

    printf("a: %d, b: %d, c: %d\n", a, b, c);
    a++;
    b++;
    c++;
}

int main(void)
{
    int i;

    for (i = 0; i < 10; i++)
        incrementa();

    return 0;
}
