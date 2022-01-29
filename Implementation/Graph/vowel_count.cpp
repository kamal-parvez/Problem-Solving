#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;


int count_vowel(char str[], int i, int l){
    if(i == l)
        return 0;
    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'
    || str[i] == 'A' || str[i] == 'E' ||str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
        return 1 + count_vowel(str, i+1, l);
    }
    else{
        return 0 + count_vowel(str, i+1, l);
    }
}


int main(){
    char str[200];
    scanf ("%[^\n]%*c", str);

    //cout<<str<<endl;

    int n = count_vowel(str, 0, strlen(str));
    cout<<n<<endl;

    return 0;
}
