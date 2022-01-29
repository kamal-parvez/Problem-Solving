#include<bits/stdc++.h>
using namespace std;

struct test{
    int run;
    int ball;
};

test cmp(const void *a,const void *b)
{
    return (*(test *)b-*(test *)a);
}

int main(){

    test t[10];
    t[0].run=100;
    t[0].ball=110;

    t[1].run=150;
    t[1].ball=120;

    t[2].run=150;
    t[2].ball=110;

    qsort(t,3,sizeof(test),cmp);
    //cout<<sizeof(test)<<endl;

    for(int i=0;i<3;i++){

        cout<<t[i].run<<" "<<t[i].ball<<endl;
    }
}
