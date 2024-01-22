#include <iostream>

using namespace std;

int main()
{
    int ValueA,ValueB,ValueD,TotalC,Op;
    float d;
    cout << "Enter value A:";
    cin>>ValueA;
    cout << "Enter value B:";
    cin>>ValueB;
    cout<<"Enter number for operator";
    cin>>Op;
        switch(Op)
        {
    case 1:
        TotalC=ValueA+ValueB;
        cout<<"Using addition for TotalC value is:"<<TotalC;
        break;
    case 2:
        TotalC=ValueA-ValueB;
        cout<<"Using subtraction for TotalC value is:"<<TotalC;
        break;
    case 3:
        TotalC=ValueA*ValueB;
        cout<<"Using multiplication for TotalC value is:"<<TotalC;
        break;
    case 4:
        d=(float)ValueA/ValueB;
        cout<<"Using division for TotalC value is:"<<d;
        break;
    case 5:
        TotalC=ValueA%ValueB;
        cout<<"Using modulas for TotalC value is:"<<TotalC;
        break;
    case 6:
       ValueA++;
       ValueB++;
       cout<<"Using increment for TotalC value is:"<<ValueA<< endl;
       cout<<ValueB;
        break;
    case 7:
       ValueA--;
       ValueB--;
       cout<<"Using decrement for TotalC value is:"<<ValueA<< endl;
       cout<<ValueB;
       break;
    case 8:
        ValueD=ValueA;
        cout<<"Using addition for TotalC value is:"<<ValueD;
        break;
     case 9:
       ValueA += 2;
       ValueB += 3;
       cout<<"Using add assign for TotalC value is:"<<ValueA<< endl;
       cout<<"Using add assign for TotalC value is:"<<ValueB;
        break;
    case 10:
       ValueA -= 6;
       ValueB -= 7;
       cout<<"Using sub assign for TotalC value is:"<<ValueA<< endl;
        cout<<"Using sub assign for TotalC value is:"<<ValueB;
        break;
    case 11:
       ValueA *= 6;
       ValueB *= 7;
       cout<<"Using multi assign for TotalC value is:"<<ValueA<< endl;
       cout<<"Using multi assign for TotalC value is:"<<ValueB;
        break;
   case 12:
       ValueA /= 6;
       ValueB /= 7;
       cout<<"Using division assign for TotalC value is:"<<ValueA<< endl;
       cout<<"Using division assign for TotalC value is:"<<ValueB;
        break;

}

    return 0;
}
