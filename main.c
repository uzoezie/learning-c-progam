#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define SOS 985



void yike();
void house(int);
void street(char);
int mainland(char);

int main ()
{
        yike();
        house(15);
        street('z');
        int v = mainland('h');
        printf("the returned value is .... %d", v);
        return 0;
}

void yike()
{
        printf("This is a NO ARGUMENT + NO RETURN value function...\n");
}

void house(int a)
{
    printf("the house number is %d\n", a);
    printf("this is a WITH ARGUMENT + NO RETURN value function...\n");
}

void street(char a)
{
    printf("this is a street address of %c\n", a);
    printf("And the street has an ascii code of %d\n", a);
    printf("these two above are also with argument + no return value function... %d\n", SOS);
}

int mainland(char a)
{
    printf("the character value of mainland is %c...\n", a);
    printf("and the ascii code of mainland %c is %d\n", a, a);

    return a+15;
}
