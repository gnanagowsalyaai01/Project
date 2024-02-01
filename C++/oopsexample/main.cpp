#include <iostream>

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
