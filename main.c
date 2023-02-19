#include <stdio.h>
#include <stdlib.h>
#include <conio.h>



void fun();
int main()
{
    extern int gb;
    printf("gb in in main():...%d\n", gb);
    fun();
    printf("gb after calling fun():...%d\n", gb);


    return 0;
}

int gb;

void fun()
{
    printf("gb in in fun():...%d\n", gb);
    gb = 2;
    printf("gb in second fun():...%d\n", gb);

}
