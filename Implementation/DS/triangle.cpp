#include<bits/stdc++.h>
using namespace std;

float get_dis(double x1, double y1, double x2, double y2){
    return sqrt((x1-x2) * (x1-x2) + (y1-y2) * (y1-y2));
}


int main(){
        double x1, y1;
        double x2, y2;
        double x3, y3;
        double x, y;

        cin>>x1>>y1>>x2>>y2>>x3>>y3;



        double low, mid, hi;
        low = min(x1, min(x2, x3));
        hi = max(x1, max(x2, x3));

        for(int i=0; i<500; i++){
            mid = (low + hi) / (2*1.0);
            x = mid;
            y = (- x3*x3 - y3*y3 + x1*x1 + y1*y1 + x * (2*x3 - 2*x1)) / ((2*y1 - 2*y3) * 1.0);

            int dis1 = get_dis(x1, y1, x, y);
            int dis2 = get_dis(x2, y2, x, y);
            int dis3 = get_dis(x3, y3, x, y);

            if()
        }

        //y = ((x2*x2 + y2*y2 - x1*x1 - y1*y1) * (2*x3 - 2*x1) - (x3*x3 + y3*y3 - x1*x1 - y1*y1) * (2*x2 - 2*x1))
          //  / (((2*y1 - 2*y3) * (2*x2 - 2*x1) - (2*y1 - 2*y2) * (2*x3 - 2*x1)) * 1.0);

       // x = (x3*x3 + y3*y3 - x1*x1 - y1*y1 + y * (2*y1 - 2*y3)) / ((2*x3 - 2*x1) * 1.0);

        cout<<"The point is : "<<x<<"  and  "<<y<<endl;

        return 0;
}


