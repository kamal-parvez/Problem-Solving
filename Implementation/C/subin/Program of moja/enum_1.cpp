#include<iostream>
using namespace std;

enum COLOR {RED,GREEN,BLUE};

int main()
{
    enum COLOR selected_color;

    cout<<"Enter 1 for RED, 2 for GREEN, 3 for BLUE : ";
    int n;
    cin>>n;

    if(n==1)selected_color=RED;
    if(n==2)selected_color=GREEN;
    if(n==3)selected_color=BLUE;

    cout<<"selected color : "<<selected_color<<endl;

    return 0;
}
