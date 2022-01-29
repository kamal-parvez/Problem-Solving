#include<bits/stdc++.h>
using namespace std;



bool detectCapitalUse(string word) {
    int n = word.size();
    bool allCap = true, allSmall = true, firstCap = true;

    for(int i=0; i<n; i++){

        //ALL capital
        if(word[i] > 'Z'){
            allCap = false;
        }

        //All small
        if(word[i] < 'a' || word[i] > 'z'){
            allSmall = false;
        }

        //First letter Capital
        if(word[0] > 'Z' || (i>0 && word[i] < 'a')){
            firstCap = false;
        }
    }

    return (allCap || allSmall || firstCap);
}


int main(){
    String word = "USA";
    detectCapitalUse(word);

    return 0;
}
