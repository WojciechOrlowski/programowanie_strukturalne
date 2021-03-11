#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main(void)
{
    int a;
    int parzyste = 0;
    int nieparzyste = 0;
    int suma_p = 0;
    int suma_n = 0;
    float srednia_p;
    float srednia_n;

    printf("Podaj liczbe\n");
    while ((scanf("%d", &a) == 1) && (a != 0))
    {
        if ((a % 2) == 0)
        {
            suma_p = suma_p + a;
            parzyste++;
        }
        else if ((a % 2) != 0)
        {
            suma_n = suma_n + a;
            nieparzyste++;
        }
    printf("Podaj liczbe\n");
    }
    if (nieparzyste != 0)
    {
        srednia_n = (suma_n / nieparzyste);
        printf("Wpisales %d liczb nieparzystych\n", nieparzyste);
        printf("Ich srednia to %.2f\n", srednia_n);
    }
    if (parzyste != 0)
    {
        srednia_p = (suma_p / parzyste);
        printf("Wpisales %d liczb parzystych\n", parzyste);
        printf("Ich srednia to %.2f", srednia_p);
    }
    return 0;
}
