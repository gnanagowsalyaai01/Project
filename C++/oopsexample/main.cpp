#include <iostream>

using namespace std;

int main()
{

    string name;
    cout<< "Enter your name : " << endl;
    cin >> name;
    cout << name << endl;
    fflush(stdin);
    cout<< "Enter your name : " << endl;
    getline(cin,name);
    cout << name << endl;


  string firstname;
  string lastname;
  cin>> firstname >>lastname;

  cout << firstname +" "+ lastname << endl ;
  string fullname = firstname.append(lastname);
  cout << fullname << endl;

  lastname.push_back('k');
  cout << lastname << endl;

  cout << firstname << endl;
   firstname.push_back('pp');
  cout << firstname<< endl;

  cout << firstname +" "+ lastname << endl ;



  fflush(stdin);
  //string fullname;
  cin>> fullname;
  fullname.insert(4," ag ");
  cout << fullname;



    return 0;
}












/*#include <iostream>

using namespace std;

namespace employee
{
    string name="Jo";
}

namespace employee1
{
    string name="Santhiya";

}

using namespace employee;

int main()
{
    cout<<name<<endl;
    cout << employee1::name << endl;
    return 0;
}
*/
