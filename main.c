#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


void print_array(char a[]);
int main()
{
    char k[4] = {'a', 'b', 'c', 'd'};
    print_array(k);

    return 0;
}

void print_array(char b[])
{
    for(int i=0; i<4; i++)
    {
        printf("%c", b[i]);
    }
}

