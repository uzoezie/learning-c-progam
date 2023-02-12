#include <stdio.h>
#include <stdlib.h>
#include <conio.h>



int fun(int);
int main()
{

    int c = fun(9);
    printf("The factorial of a number is: %d", c);

    return 0;
}

int fun(int a)
{
    if(a == 1)
    {
        return a;
    }
    return a * fun(a-1);
}
