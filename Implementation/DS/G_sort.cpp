#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;


map<string, int> mp;

struct Student{
    string name, dept, desig;
};

bool comparator(Student a, Student b){
    if(a.dept.compare(b.dept) == 0){
        if(a.desig.compare(b.desig) == 0){
            return a.name < b.name;
        }
        else{
            return mp[a.desig] < mp[b.desig];
        }
    }
    else{
        return a.dept < b.dept;
    }
}


int main(){
    int n;
    cin>>n;
    //char str[200];
    //scanf ("%[^\n]%*c", str);
    Student st[10000];

    for(int i=0; i<n; i++){
        cin>>st[i].name>>st[i].dept>>st[i].desig;
    }

    /*for(int i=0; i<n; i++){
        cout<<st[i].name<<" "<<st[i].dept<<" "<<st[i].desig<<endl;
    }*/

    mp["MD"] = 1;
    mp["GM"] = 2;
    mp["DGM"] = 3;
    mp["AGM"] = 4;
    mp["ENGR"] = 5;

    sort(st, st+n, comparator);
    cout<<"After sort"<<endl;

      for(int i=0; i<n; i++){
        cout<<st[i].name<<" "<<st[i].dept<<" "<<st[i].desig<<endl;
    }

    return 0;
}

