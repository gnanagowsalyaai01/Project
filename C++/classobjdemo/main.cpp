
#include<iostream>
using namespace std;
class Firstclsdemo
{

  public:
      int a=10;
  void multiply()
  {
      int x,y,z;
      cout<<"\nValue X is:";
      cin>>x;
      cout<<"\nValue Y is:";
      cin>>y;
      z=x*y;
      cout<<"\nMultiply Value Z is:"<<x*y;

  }
  void subtraction();
};
void Firstclsdemo:: subtraction()
{
    int e,f;
    cout<<"\n\nValue E is:";
    cin>>e;
    cout<<"\nValue F is:";
    cin>>f;
   cout<<"\nSubtracted Value C is:"<<e-f;
}

int addition()
{
   int a,b,c;
     cout<<"\n\nValue A is:";
      cin>>a;
      cout<<"\nValue B is:";
      cin>>b;
      c=a+b;
      cout<<"\nAdded Value C is:"<<a+b;
    return 0;
}
int main()
{

    Firstclsdemo kd;
    cout<<kd.a;
    kd.multiply();
    addition();
    kd.subtraction();
    return 0;
}
