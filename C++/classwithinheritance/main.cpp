#include <iostream>

using namespace std;
//bass class
class arithmatic
{
  public :
    int a=10;
   int addition()
    {
        int c=5,k=10,b;
        b=k+c;
        cout<< b<<endl;
    }
};
class arithmaticop
{
   public :
   int subtraction()
   {
       int c=5,k=10,b;
       b=k-c;
       cout<<b<<endl;

   }
};
//derived class(child class)
class inheritancedemo : public arithmatic,public arithmaticop
{
   public :
   string d="THANK YOU";
};

int main()
{
     inheritancedemo id;
     cout<<id.a;
     id.addition();
     id.subtraction();
     cout<<id.d<<endl;
    return 0;
}
