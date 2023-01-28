#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main()

{

    int ch;

    printf("Enter a character value here: \n");
    printf("Enter: '1':BOY \t '2':MAN \t '3':OLD MAN \n");
    printf("Enter: '4':GIRL \t '5':WOMAN \t '6':OLD WOMAN \n");
    scanf("%d", &ch);

    switch (ch)
    {
        case 1 : printf("Your gift is a TOY CAR \n");
                            break;
        case 2 : printf("Your gift is a HOUSE \n");
                            break;
        case 3 : printf("Your gift is a VACATION \n");
                            break;
        case 4 : printf("Your gift is a doll");
                            break;
        case 5 : printf("Your gift is a HAIR");
                            break;
        case 6 : printf("Your gift is PEDICURE");
                            break;
        default : printf("Try again next time");
    }


    return 0;
}
