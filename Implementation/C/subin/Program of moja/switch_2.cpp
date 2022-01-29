#include<iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;

    switch(n)
    {
    case 1:
        cout<<"One Time"<<endl;
        break;
    case 2:
        cout<<"Two Times"<<endl;
        break;
    default:
        cout<<"Many times"<<endl;
        break;
    }
    return 0;
}
