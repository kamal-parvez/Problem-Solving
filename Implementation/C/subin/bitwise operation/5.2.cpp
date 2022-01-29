#include<iostream>
using namespace std;


int main()
{
    int n,x,m,t;

    while(1)
    {
        cout<<"Please enter your number : ";
        cin>>n;
        if(n==0)break;

        cout<<"Press 1 to shift left or press 2 to shift right : ";
        cin>>t;

        if(t==1)
        {
            cout<<"How many bits you want to shift left?";
            cin>>x;

            m=n<<x;

            cout<<"Result is :"<<m<<endl;
        }

        if(t==2)
        {
            cout<<"How many bits you want to shift right?";
            cin>>x;

            m=n>>x;

            cout<<"Result is :"<<m<<endl;
        }
    }

    return 0;
}
