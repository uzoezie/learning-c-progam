#include <stdio.h>
#include <stdlib.h>
#include <conio.h>



void fun();
int main()
{

    fun();
    fun();
    return 0;
}

void fun()
{
    static int i;

    printf("in fun ()...%d  \n", i);
    printf("in fun ()...%d  \n", ++i);
}
