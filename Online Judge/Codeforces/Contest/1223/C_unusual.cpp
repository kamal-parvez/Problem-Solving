#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;

    int l = str.size();
    int open = 0, close = 0;
    for(int i=0; i<l; i++){
        if(str[i] == '(')
           open++;
        else
            close++;
    }

    if(n%2 == 1 || open != close){
        cout<<-1<<endl;
    }

    else{


    }


    return 0;
}
