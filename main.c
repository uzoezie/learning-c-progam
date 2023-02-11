#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define SOS 985


int food(char, int, float, int);

int main ()
{

    int h = food('Z', 15, 18, 21);
    printf("The returned value is = %d\n", h);

    return 0;
}

int food(char a, int b, float h, int v)
{
    printf("The value of first char is = %c\n", a);
    printf("The ascii code of the first char is = %d\n", a);
    printf("The value of the first int is = %d\n", b);
    printf("The value of the first float is = %.2f\n", h);
    printf("The value of the second int is %d\n", v);

    return v+h+b+a;

}
