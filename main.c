/*
Assignment
Write a C program to do the following:

1. Read a number (integer) from the keyboard
2. Calculate the factorial of the red number
Example; 5 = 5!  = 5*4*3*2*1 = 120
3. Print the calculated factorial value to the screen
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main ()

{
    int h;
    int f = 1;

    printf("Write an integer number on the screen... \n");
    scanf("%d", &h);

    for(int v=1; v<=h; v++)
    {
        f*=v;
    }

    printf("The factorial of %d is %d", h, f);
    return 0;
}
