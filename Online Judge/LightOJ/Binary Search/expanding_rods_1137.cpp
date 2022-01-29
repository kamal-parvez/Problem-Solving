#include<bits/stdc++.h>
#include<math.h>
using namespace std;


double findDiameter(double arc, double chord){
    double low = 0, mid, high = 100000000;
    double diameter;
    double chordCal;

    for(int i=0; i<1000; i++){
        mid = (low + high)/2.0;
        //printf("Low: %f    mid: %f     high: %f\n", low, mid, high);
        diameter = mid;
        chordCal = diameter * sin(arc/diameter);

        //printf("calculated chord: %f       real chord: %f     arc: %f\n", chordCal, chord, arc);

        if(chordCal == chord){
            break;
        }
        else if(chordCal > chord){
            high = mid;
        }
        else{
            low = mid;
        }
    }

    return diameter;
}


int main(){
    //cout<<sin(1.5708)<<endl;
    freopen("input.txt", "r", stdin);
    int totalTest;
    cin>>totalTest;
    double L, n, C;

    for(int test=1; test<=totalTest; test++){
        cin>>L>>n>>C;

        double arc = (1 + n * C) * L;
        double chord = L;
        double height;
        if(chord == arc){
            height = 0;
        }
        else{
            double radius = findDiameter(arc, chord) / 2.0;
            double perpendicular = sqrt(radius * radius - (chord/2) * (chord/2));
            height = radius - perpendicular;
        }

        printf("Case %d: %.10f\n", test, height);
    }

    return 0;
}
