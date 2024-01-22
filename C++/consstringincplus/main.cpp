#include <iostream>

using namespace std;
class printname
{
public:
    int strfunction()
    {
        string name;
        cout << "\nEnter your name:";
        cin >>name;
        cout << "\nHi!..."<<name;
    }
    int strfunction(string name)
    {

        cout << "\nHi!..."<< name <<"\tWelcome to string function overloading";
    }
    int strfunction(string name,int year)
    {
        cout <<"\nHi!..."<< name <<"\tWelcome to string function overloading on"<<year;
    }

};
int main()
{

    printname pn;
    pn.strfunction();
    pn.strfunction("Jothika");
    pn.strfunction("Kowsalya",2024);
    return 0;
}




























/*#include <iostream>

using namespace std;
class printname
{
   public:

    printname()
    {
    cout << "Enter the name ...  " ;
    string name;
    cin >> name;
    cout << "Hi !....  " << name << "  Welcome to String Class with Constructor" ;
    cout << "\n Enter value for selection \t";
    int n;
    cin >> n;
    switch (n)
    {
    case 1 :
        cout << " \n Kowsalya Welcome to Constructor with switch ";
        break;
    case 2:
        cout << "\n Jo Welcome to Constructor with switch ";
        break;
    case 3 :
    cout << "\n Welcome to Constructor with switch ";
    break;
    }
    }
    };

int main()
{

    printname pn;
    return 0;
}
*/
