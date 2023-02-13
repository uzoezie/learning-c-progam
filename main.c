#include <stdio.h>
#include <stdlib.h>
#include <conio.h>



int fact(int);

int main()
{
    int v;

    printf("Enter an integer number...\t");
    scanf("%d", &v);

    printf("The factorial of the number is %d", fact(v)); 

    return 0;
}

int fact(int a)
{
    if(a == 1)
    {
        return a;
    }
    return a * fact(a-1);
}

