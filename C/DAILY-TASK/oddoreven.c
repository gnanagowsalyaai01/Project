#include<stdio.h>
int main()
{
    int number;
    printf("\n Enter the number is:");
    scanf("%d",&number);
    if(number % 2 == 0)
       {
          printf("\nThe given Number is even");
       }
   else
  {
   printf("\nThe given Number is odd");
   return 0;
  }
}
