#include <stdio.h>
#include <stdlib.h>
#include <conio.h>



int fun(int);
int main()
{

    int c;

    printf("Enter the number ....:\t");
    scanf("%d", &c);

    printf("The factorial of the number is: %d", fun(c));

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
