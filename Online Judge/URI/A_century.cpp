#include <iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main() {

    int year;

    while(scanf("%d", &year) == 1){
        int x = (int) ceil(year/100.0);

        cout<<x<<endl;
    }
    return 0;

    return 0;
}
