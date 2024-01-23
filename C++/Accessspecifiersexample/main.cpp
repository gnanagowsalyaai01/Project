#include <iostream>

using namespace std;
class Differvoidint
{
  private:
      int salary;
  public:
       string name;
      int  vfunc(int s)
       {
         salary =s;
       }
       int ifunc()
        {
            return salary;
        }
        void printfunc()
         {
             cout<<"\n salary:"<<salary;
         }
         void notprint()
         {
            cout<<"\n salary:"<<salary;
         }
};
int main()
{
    Differvoidint dv;
    string name;
    cout << "Enter your name:"<<name;
    cin>>name;
    dv.name;
    dv.vfunc(10000);
    cout<<"\nSalary:";
    cout<< dv.ifunc();
    dv.printfunc();
    dv.notprint();
    return 0;
}

/*#include <iostream>

using namespace std;
class Differvoidandint
{
  private:
      int salary;
  public:
       string name;
     void vfunc(int s)
       {
         salary =s;
       }
       int ifunc()
        {
            return salary;
        }
};
int main()
{
    Differvoidandint dvi;
    string name;
    cout << "Enter your name:"<<name;
    cin>>name;
    dvi.name;
    dvi.vfunc(10000);
    cout<<"\nSalary:";
    cout<< dvi.ifunc();
    return 0;
}
*/











/*#include <iostream>

using namespace std;
class Accessspecifierexample
{
  private:
      int k=29;
  protected:
      int d=14;
  public:
      int a,b;
      void printb()
      {
          b=k;
          cout<<"\nPrint value  B is:"<<b;
          b=d;
          cout<<"\nPrint value  B is:"<<b;
      }
};
int main()
{
    int a;
    Accessspecifierexample ase;
    ase.a=24;
    cout << "\nPrint value  A is:"<< ase.a;
    ase.printb();
    return 0;
}
*/
