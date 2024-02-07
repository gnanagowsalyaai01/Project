#include <stdio.h>
#include <stdlib.h>



int main()
{
    int a=10,b=2;
    printf(" \n-------------------------------------------");
    printf(" \n-------------------------------------------");
    printf(" \nValue of A is  : %d ",a);
    printf(" \nAddress of A is: %p ",&a);
    printf(" \nValue of A size is  : %d ",sizeof(a));
    printf(" \n-------------------------------------------");
    printf(" \n-------------------------------------------");
    printf(" \nValue of B is  : %d ",b);
    printf(" \nAddress of B is: %p ",&b);
    printf(" \nValue of B size is  : %d ",sizeof(b));
    printf(" \n-------------------------------------------");
    printf(" \n-------------------------------------------");

    char Ammu[10]=" Kowsi";
    printf(" \nValue of Ammu is  : %s ",Ammu);
    printf(" \nAddress of Ammu is: %p ",&Ammu);
    printf(" \nValue of Ammu size is  : %d ",sizeof(Ammu));
    printf(" \n-------------------------------------------");
    printf(" \n-------------------------------------------");

    char *p=" Kowsi";
    printf(" \nValue of P is  : %p",p);
    printf(" \nAddress of P is: %p ",&p);
    printf(" \nValues stored of the address: %s ",p);
    printf(" \n-------------------------------------------");
    printf(" \n-------------------------------------------");

    char **q=&p;
    printf(" \nValue of Q is  : %p ",q);
    printf(" \nAddress of Q is: %p ",&q);
    printf(" \nValues stored of the address: %s ",*q);
    printf(" \n-------------------------------------------");
    printf(" \n-------------------------------------------");



    return 0;
}
