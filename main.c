#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define SOS 985



float add(int, int);
float sub(int, int);

int main ()
{

    int a,b;
    float n;

    printf("Please enter the first number...\t");
    scanf("%d",  &a);

    printf("Please also enter the second number...\t");
    scanf("%d", &b);

    n = add(a,b);

    printf("Subtract the nested function of  (%d-%d)/2 is %.2f\n", a,b, n);


    return 0;
}

float add(int a, int b)
{
    printf("The addition of %d and %d = %d\n", a,b, a+b);

    return sub(a,b);
}

float sub(int a, int b)
{

    return (b-a)/2;
}
