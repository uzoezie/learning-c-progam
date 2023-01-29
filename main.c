#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main()

{
    int a;

    printf("Enter an integer");
    scanf("%d", &a);


    if (a == 10)
    {
        goto morethan;
    }
    else
    {
        goto lessthan;
    }
    

    morethan : printf("This is greater than \n");
    lessthan : printf("This is less than \n");

    return 0;
}
