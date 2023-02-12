#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define SOS 985



int fun(int);

int main ()
{
    int n = fun(1);

    printf("The value of the recursive function is %d", n);
    return 0;
}

int fun(int a)
{

    a++;

    if(a == 5)
    {
        return a;
    }
    return fun(a);
}
