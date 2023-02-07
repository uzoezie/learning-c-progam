#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


//Print Cprogramming... triangle

int main ()

{
    char p[] = "Cprogramming";

    for (int i=0; i<12; i++)
    {
        for (int j=0; j<i+1; j++)
        {
            printf("%c", p[j]);
        }
        printf("\n");

    }

    return 0;
}
