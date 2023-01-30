/*
Write a C Program to do the following:

1. Read 2 number from the keyboard
2. Print the following:
            1. Addition
            2. Substraction
            3. Division
            4. Multiplication

3. Scan the options, "1" for addition, "2" for substraction and so on ...

4. Print the result of the options

*/


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main()

{
    int a, b;
    int ch;

    printf("Print any number \n");
    scanf("%d", &a);    

    printf("Print a second number");
    scanf("%d", &b);

    printf("Here are the options below \n");
    printf("1 = Addition \t \t 2 = Substraction \t \t 3 = Division \t \t 4 = Multiplication \t \n");
    scanf("%d", &ch);

switch (ch)
{
case 1: printf("Addition: %d", a + b);
                    break;
case 2: printf("Substraction: %d", a - b);
                    break;
case 3: if(b == 0)
        {
            printf("Nothing is divisible by 0");
        }
        else
        {
             printf("Division: %d", a / b);
        }
                    break;
case 4: printf("Multiplication: %d", a * b);
                    break;
default:printf("This is different: %d", a * b + 40 + 36);
                    break;
}
    return 0;
}
