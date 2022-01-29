#include<iostream>
using namespace std;

enum DAY {SUNDAY,MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY};

int main()
{
    enum DAY today;
    today=FRIDAY;

    switch(today){
        case SUNDAY:
            cout<<"Today is Sunday.It is a work day."<<endl;
            break;
        case MONDAY:
            cout<<"Today is Monday.It is a work day."<<endl;
            break;
        case TUESDAY:
            cout<<"Today is Tuesday.It is a work day."<<endl;
            break;
        case WEDNESDAY:
            cout<<"Today is Wednesday.It is a work day."<<endl;
            break;
        case THURSDAY:
            cout<<"Today is Thursday.It is a half work day."<<endl;
            break;
        case FRIDAY:
            cout<<"Today is Friday.It is a holiday."<<endl;
            break;
        case SATURDAY:
            cout<<"Today is Saturday.It is a holiday."<<endl;
            break;
    }

    return 0;
}
