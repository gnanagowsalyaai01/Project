#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;

    addition(get A(),get B());
    subtraction(get A(),get B());
    multiplication(get A(),get B());
    division(get A(),get B());
    modulus(get A(),get B());
    Increment(get A(),get B());
    decrement(get A(),get B());
    assign(get A(),get B());
    addasign(get A(),get B());
    subassign(get A(),get B());
    multiassign(get A(),get B());
    divassign(get A(),get B());
    equalto(get A(),get B());
    notequalto(get A(),get B());
    greaterthan(get A());
    lessthan(get A(),get B());
    greaterthanequal(get A(),get B());
    lessthanequal(get A(),get B());
    ANDprogram(get A(),get B());
    ORprogram(get A(),get B());
    NOT(get A(),get B());
    return 0;
}
int get A()
{
    int a;
    printf("Enter value A is..");
    scanf("%d",&a);
    return a;

}
int get B()
{
    int b;
    printf("Enter value B is..");
    scanf("%d",&b);
    return b;
}
int addition (int x,int y)
{
    int z=x+y;
    printf("addition value is...%d",z);
}

int subtraction (int x,int y)
{
    int z=x-y;
    printf("\n\nSubtraction value is...%d",z);
}
int multiplication (int x,int y)
{
int z=x*y;
printf("\n\n Multiplication value is...%d",z);
}
int division (int x,int y)
{
float d=(float)x/y;
printf("\n\n division value is...%f",d);
}
int modulus (int x,int y)
{
int z=x%y;
printf("\n\n Modulus value is...%d",z);

}
int Increment (int x,int y)
{
x++;
printf("\n\n Increment value is...%d",x);
}
int decrement (int x,int y)
{
y--;
printf("\n\n drecrement value is...%d",y);
}
int assign (int x,int y)
{
int z=x;
printf("\n\n assign value is...%d",z);
}
int addasign (int x,int y)
{
 x+=2;
printf("\n\n addition assign value is...%d",x);
}
int subassign (int x,int y)
{
    y-=1;
    printf("\n\n sub assign value is....%d",y);
}
int multiassign (int x,int y)
{
    x*=3;
    printf("\n\n multi assign value is....%d",x);
}
int divassign (int x,int y)
{
    y/=3;
    printf("\n\n div assign value is....%d",y);
}
int equalto (int x,int y)
{
    y=x;
    printf("\n\n equal to value is....%d",y);
}
int notequalto(int x,int y)
{
    x!=y;
    printf("\n\n Not equal to value is....%d",x);
}
 int greaterthan(int a,int c)
 {
   while(c=a>4)
{
    printf("\n\n Greater than value is....%d",c);
    return 0;

}
 }
int lessthan(int b,int c)
 {
  while(c=b<15)
  {
   printf("\n\n less than value is....%d",c);
   return 0;

  }
 }
int greaterthanequal(int a)

    {
   printf("\n\n Greater than equal value is....%d",a>=3);

 }

int lessthanequal(int x,int y)
 {

   printf("\n\n less than equal value is....%d",x>=y);
 }

 int ANDprogram (int x,int y)
 {
    if (x > 3 && y < 15)
      {
          printf("\n the AND value is:%d",x);
      }
 }
int ORprogram (int x,int y)
{

     if( x > 3 || y > 5)
     {
          printf("\n the OR value is:%d",x);
     }
}
int NOT(int a,int b)
{
    printf("\n\nNOT value is...%d",!(a>10 && b<5));
}

