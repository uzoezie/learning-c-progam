#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main ()
{
        //Assinment - Searching a Number
    /*
    Write a C Program that does the following:

        1. Read 10 Integer numbers from the keyboard
        2. Read the number(key) to be searched
        3. Search the key among the 10 numbers.
        4. Print "Number Found" if the key is found, otherwise "Number NOT found".
    */


    int a[10];
    int k;
    int flag = 0;

    for (int i=0; i<10; i++)
    {
        printf("The %dth number is...\t", i+1);
        scanf("%d", &a[i]);
    }

    printf("\nEnter the number to be searched...\t");
    scanf("%d", &k);

    for (int i=0; i<10; i++)
    {
        if (k == a[i])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        printf("Viola!!! Number found...\n");
    }
    else 
    {
        printf("Nah... Try again later... Number not found \n");
    }

    return 0;
}
