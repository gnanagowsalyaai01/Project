#include<iostream>
using namespace std;
class clswithopsexample
{

  public:
      int arthmticop=7;
  void addition()
  {
      cout<<"\n\n Addition operator \n\n";
      int x,y,z;
      cout<<"\nValue X is:";
      cin>>x;
      cout<<"\nValue Y is:";
      cin>>y;
      z=x+y;
      cout<<"\nAdded Value Z is:"<<x+y;

  }
  void subtraction()
  {
       cout<<"\n\n Subtraction operator \n\n";
      int x,y,z;
      cout<<"\nValue X is:";
      cin>>x;
      cout<<"\nValue Y is:";
      cin>>y;
      z=x-y;
      cout<<"\nSubtracted Value Z is:"<<x-y;

  }
  void Multiplication()
  {
      cout<<"\n\n Multiplication operator \n\n";
      int x,y,z;
      cout<<"\nValue X is:";
      cin>>x;
      cout<<"\nValue Y is:";
      cin>>y;
      z=x*y;
      cout<<"\nMultiplied Value Z is:"<<x*y;

  }
  void division();
   void modulas();
};
void clswithopsexample:: division()
{
      cout<<"\n Division operator \n\n";
      int x,y;
      float z;
      cout<<"\nValue X is:";
      cin>>x;
      cout<<"\nValue Y is:";
      cin>>y;
      z=(float)x/y;
      cout<<"\nDivided Value Z is:"<<((float)x/y);
}
void clswithopsexample:: modulas()
{
      cout<<"\n\n Modulas operator \n\n";
      int x,y,z;
      cout<<"\nValue X is:";
      cin>>x;
      cout<<"\nValue Y is:";
      cin>>y;
      z=x%y;
      cout<<"\n Modulas Value Z is:"<<x%y;
}

int increment()
{
     cout<<"\n\n Increment operator \n\n";
   int a,c;
     cout<<"\n\nValue A is:";
      cin>>a;
      c=a++;
      cout<<"\nIncrement Value C is:"<<a++;
    return 0;
}
int decrement()
{
    cout<<"\n\n Decrement operator \n\n";
     int a,c;
     cout<<"\n\nValue A is:";
     cin>>a;
      c=a--;
      cout<<"\nDecrement Value C is:"<<a--;
    return 0;
}
int main()
{

    clswithopsexample kd;
    cout<<"\n Arithmatic operators :\t"<<kd.arthmticop;
    kd.addition();
    kd.subtraction();
    kd.Multiplication();
    kd.division();
    kd. modulas();
    increment();
    decrement();

    return 0;
}
