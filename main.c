/*
Define a symbolic constant with a name "SLNO" and assign some values to it
Define a constant which should store 5-digit SSN
Promp the user to feed their first name, initial of his last name, age, and height

Example: Hanoak S 23 6.2

Print back all the read info to the screen with proper format. The info should include the SLNO and 5-digit SSN
*/


#include <stdio.h>
#include <stdlib.h>

#define SLNO 15

int main()

{
    const int ssn = 45769;
    char init;
    char name[11];
    int age;
    float height;

    printf("ENTER YOUR INITAL: \t");
    scanf("%c", &init);

    printf("ENTER YOUR NAME: \t");
    scanf("%10s", name);

    printf("ENTER YOUR AGE: \t");
    scanf("%d", &age);

    printf("ENTER YOUR HEIGHT: \t");
    scanf("%f", &height);


    printf("YOUR SLNO: %d \n", SLNO);
    printf("YOUR INITIAL: %c \n", init);
    printf("YOUR NAME: %s \n", name);
    printf("YOUR AGE: %d \n", age);
    printf("YOUR HEIGHT: %f \n", height);
    printf("YOUR SSN: %d \n", ssn);


    return 0;
}
