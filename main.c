#include <stdio.h>
#include <stdlib.h>
#include <conio.h>



int main()
{
    int a = 10;
    int b = 20;

    {
        int a = 100;
        int b = 200;
        printf("inside main()... a=%d, and b=%d\n", a, b);
    }

      printf("outside main()... a=%d, and b=%d\n", a, b);

    return 0;
}
