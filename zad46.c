// Program treba pretvorit decimalni broj u binarni pomocu funkcije.

#include <stdio.h>
#include <math.h>

long Binarna_pretvorba(int decimalni)
{
    long binarni = 0;
    int ostatak, temp = 1;

    while (decimalni!=0)
    {
        ostatak = decimalni%2;
        decimalni = decimalni / 2;
        binarni = binarni + ostatak*temp;
        temp = temp * 10;
    }
    return binarni;
}

int main()
{
    int decimalni;
    printf("Unesi decimalni broj: ");
    scanf("%d", &decimalni);
    printf("Binarni broj je: %ld", Binarna_pretvorba(decimalni));
    return 0;
}
