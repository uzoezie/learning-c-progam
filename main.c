#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define SOS 985


float add(int, int);
float sub(int, int);
int main ()
{

    int a,b;
    float n,m;

    printf("Enter the first number ...\t");
    scanf("%d", &a);

    printf("Now you can enter the second number...\t");
    scanf("%d", &b);

    n = add(a,b);
    m = sub(a,b);

    printf("The returned value is %d + %d multiply by 2 = %2.f\n", a,b,n);
    printf("Here, the returned value is %d -%d divide by 2 = %.2f\n", b,a,m);

    return 0;
}

float add(int a, int b)
{
    printf("addition of %d and %d = %d\n", a,b, a+b);
    return a+b*2;
}


float sub(int a, int b)
{
    printf("subtraction of %d and %d = %d\n", b,a, b-a);
    return b-a/2;
}
