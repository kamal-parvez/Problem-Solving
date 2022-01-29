#include<bits/stdc++.h>
using namespace std;

bool string_match(string text, string pattern){
    int n = text.size();
    int m = pattern.size();

    for(int i = 0; i<n-m+1; i++){
        int j = 0;
        for(j=0; j<m && i+j<n; j++){
            if(pattern[j] != text[j+i])
                break;
        }

        if(j==m)
            return true;
    }
    return false;
}


int main(){
    string text;
    string pattern;

    cin>>text;
    cin>>pattern;

    bool res = string_match(text, pattern);

    if(res == true)
        cout<<"Pattern matched"<<endl;
    else
        cout<<"Pattern not matched"<<endl;

    return 0;
}
