#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define SOS 985



void add(int, int);
float umbrella(int, int);


int main ()
{
    add(15, 30);
    float c = umbrella(5, 6);

    printf("return value of umbrella = %.2f\n", c);

    return 0;
}

void add(int a, int b)
{
    printf("the first value is %d\n", a);
    printf("the second value is %d\n", b);
    printf("the sum of %d + %d = %d\n", a,b, a+b);
}

float umbrella(int a, int b)
{
    printf("this is a function of umbrella ...%d\n", a);
    printf("this is the second umbrella ...%d\n", b);
    printf("umbrella... %d\n", a+b);

    return a*b+SOS;
}