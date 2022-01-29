#include<bits/stdc++.h>
using namespace std;



bool comparator(string str1, string str2){
    int l1 = str1.size();
    int l2 = str2.size();

    return str1[l1-1] < str2[l2-1];
    //return str1 < str2;
}


vector <string> string_sort(vector <string> str){
    sort(str.begin(), str.end(), comparator);

    return str;
}


int main(){
    int n;
    cin>>n;

    vector <string> ara;
    string city;
    for(int i=0; i<n; i++){
        cin>>city;
        ara.push_back(city);
    }

    /*for(int i=0; i<n; i++){
        cout<<ara[i]<<endl;
    }*/

    ara = string_sort(ara);

    for(int i=0; i<n; i++){
        cout<<ara[i]<<endl;
    }

    return 0;
}
