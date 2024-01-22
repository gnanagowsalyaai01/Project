#include <iostream>

using namespace std;
class votingcheck
{
public:
   int checkeligible()
    {
        int age;
        if(age>=18)
        {
            cout<<"\n You are eligible to vote";
        }
        else
        {
            cout<<"\n You are not eligible to vote";

        }
    }

        int checkeligible(int age)
    {
        if(age>=18)
        {
            cout<<"\n You are eligible to vote";
        }
        else
        {
            cout<<"\n\nYou are not eligible to vote";

        }



    }

};

int main()
{
    votingcheck kd;
     int age;
    cout<<"Enter your age:";
    cin>>age;
    kd.checkeligible();

    kd.checkeligible(20);
    return 0;
}







































/*#include <iostream>

using namespace std;
class votingcheck
{
public:
    votingcheck()
    {
        int age;
        cout<<"Enter your age:";
        cin>>age;
        if(age>=18)
        {
            cout<<"\n You are eligible to vote for first constructor";
        }
        else
        {
            cout<<"\n You are not eligible to vote for first constructor";

        }
    }

  votingcheck( int age)
    {
        if(age>=18)
        {
            cout<<"\n You are eligible to vote for second constructor";
        }
        else
        {
            cout<<"\n You are not eligible to vote for second constructor";

        }

    }
    void checkeligible(int age)
    {

        if(age=18)
        {
            cout<<"\n You are eligible to vote";
        }
        else
        {
            cout<<"\n You are not eligible to vote";

        }


    }

};

int main()
{
    votingcheck kd;
    int age;
        cout<<"\nEnter your age:";
        cin>>age;
    votingcheck kd1(age);

    kd.checkeligible(27);
    return 0;
}
*/








/*#include <iostream>

using namespace std;
class votingcheck
{
public:
    void checkeligible( )
    {
        int age;
        if(age>=18)
        {
            cout<<"\n You are eligible to vote";
        }
        else
        {
            cout<<"\n You are not eligible to vote";

        }


    }

};

int main()
{
    votingcheck kd;
    int age;
    cout<<"Enter your age:";
    cin>>age;
    kd.checkeligible();
    return 0;
}
*/
