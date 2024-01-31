#include<stdio.h>
int main()
{
     int i,j;
     for (int i=1; i < 5; i++)
     {
        printf("*");
       for (int j = 1; j <=i; j++)
        {
        printf("*\n",j);
        }
       return 0; 
    }
    
}