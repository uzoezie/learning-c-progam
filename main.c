#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main ()

{
    int p[5];


    for (int i=0; i<5; i++)
    {
        printf("Enter the %dth number \t", i);
        scanf("%d", &p[i]);
    }

    for (int i=0; i<5; i++)
    {
        printf("The %dth number is : %d\t", i, p[i]);
    }


    return 0;
}