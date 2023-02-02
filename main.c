#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main ()
{
    //Direct initialization of 2D array.
    int a[3][3] = {1,2,3,4,5,6,7,8,9};

    //matrix initialization of array.
    int b[3][3] = {
                    (1,2,3),
                    (4,5,6),
                    (7,8,9)
                  };

    //Manual run-time initialization of 2D array.
    int c[3][3];

    c[0][0] = 1;     
    c[0][1] = 2;     
    c[0][2] = 3;
    
    c[1][0] = 4;     
    c[1][1] = 5;     
    c[1][2] = 6;
    
    c[2][0] = 7;     
    c[2][1] = 8;     
    c[2][2] = 9;

    //Dynamic runtime initialization of 2D array.
    int d[3][3];

    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            printf("enter the [%d][%d]number: \t", i, j);
            scanf("%d", &d[i][j]);
        }

    }

        //Printing it back to the screen

        for (int i=0; i<3; i++)
    {
            for (int j=0; j<3; j++)
            {
                printf("[%d][%d] : %d \t", i, j, d[i][j]);
            }
            printf("\n");
    }


    return 0;
}