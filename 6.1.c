#include <stdio.h>
#define roz 26
int main(void)
{
    char znaki[roz];
    int i;
    int indeks;

    for (i = 0; i < roz; i++)
    {
        znaki[indeks] = 'a' + i;
    }
    for (i = 0; i < roz; i++)
    {
        printf("%c", znaki[i]);
    }
    printf("\n");
    return 0;
}
