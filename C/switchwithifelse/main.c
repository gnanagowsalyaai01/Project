#include<stdio.h>
int main()
{
    int a,b,c,d;
    char operator;
    printf("Enter the value 2 or 3");
    scanf("%d",&d);
  if(d == 2)
  {
    printf("enter the value a:");
    scanf("%d",&a);
    printf("enter the value b:");
    scanf("%d",&b);
    printf("Select operator:");
    scanf(" %c",&operator);
  switch(operator) 
  {
    case '+':
     printf("Added value is:%d",a+b);
     break;
    case '-':
     printf("Subtracted value is:%d",a-b);
     break;
    case '*':
     printf("Multiplied value is:%d",a*b);
     break;
     }
  }
   else
    { 
      char op;
    printf("enter the value a:");
    scanf("%d",&a);
    printf("enter the value b:");
    scanf("%d",&b);
    printf("enter the value c:");
    scanf("%d",&c);
    printf("Select operator:");
    scanf(" %c",&op);
  switch(op) 
  {
    case '+':
     printf("Added value is:%d",a+b+c);
     break;
    case '-':
     printf("Subtracted value is:%d",a-b-c);
     break;
    case '*':
     printf("Multiplied value is:%d",a*b*c);
     break;
}
   }
return 0;
}
  
     