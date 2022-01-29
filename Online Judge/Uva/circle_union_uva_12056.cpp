#include<bits/stdc++.h>
using namespace std;

struct typeCircle{
    int x;
    int y;
    int radius;
};

struct typeSlice{
    int x;
    int y;
};

typeCircle circle[102];
typeSlice slice[100000];
int bomb;


void makeSlice(){
    int j = 0;
    for(int i=0; i<bomb; i++){

        //leftMost Point
        slice[j].x = circle[i].x - circle[i].radius;
        slice[j].y = circle[i].y;
        j++;

        //Right Most Point
        slice[j].x = circle[i].x + circle[i].radius;
        slice[j].y = circle[i].y;
        j++;

        for(int j=i+1; j<bomb; j++){

        }
    }
}




int main(){


    while(cin>>bomb && bomb){
        for(int i=0; i<bomb; i++){
            cin>>circle[i].x;
            cin>>circle[i].y;
            cin>>circle[i].radius;
        }
    }

    return 0;
}
