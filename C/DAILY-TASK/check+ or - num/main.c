#include<stdio.h>
int main()
{
    int num;
    printf("\n Enter value is:");
    scanf("%d",&num);
    if(num>0)
       {
          printf("\nPositive Number");
       }
   else
      {
         printf("\nNegative Number");
         return 0;
      }
}