#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define SOS 985



int house(char);
int blue();

int main()
{
    int k = house('o');
    int m = blue();
    printf("the return value is %d\n", k);
    printf("the return value is put in %c and %d\n", k, SOS);
    printf("The return key for function blue() is SOS * 5 = %d stored in int m", m);

    return 0;
}

int house(char m)
{
    printf("the value is %c\n", m);
    printf("and the ascii code of %c is = %d\n", m, m);

    return m;
}

int blue()
{
    printf("This is a function blue()...\n");

    return SOS * 5;
}