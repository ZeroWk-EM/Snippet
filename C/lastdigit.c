#include <stdio.h>

int get_numb(void);
int lastgit(long numb);

int main(void)
{
    printf("Dammi un numero ");
    long numb = get_numb();
    while (numb)
    {
        printf("[%d]\n", lastgit(numb));
        numb = numb / 10;
    }
}

int get_numb(void)
{
    int var;
    scanf("%d", &var);
    return var;
}

int lastgit(long numb)
{
    numb = numb % 10;
    return numb;
}
