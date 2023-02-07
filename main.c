#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main ()

{
    char d = 'z';

    printf("The ASCII Code of %c is %d\n", d, d);
    printf("%c + %c = %d\n", d, d, d+d);
    printf("%c * %c = %d\n", d, d, d*d);

    return 0;
}