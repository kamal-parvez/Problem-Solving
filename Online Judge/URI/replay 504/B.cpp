#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;



int main(){
    int t;
    scanf("%d", &t);
    char str[1001];
    char suit[] = "7QJKA";

    while(t--){
        scanf("%s", str);

        //printf("str: %s\n", str);
        //printf("suit: %s\n", suit);

        int l = strlen(str);
        int cnt = 0;


        int j=0;

        while(1){

            j=0;

            for(int i=0; i<l; i++){

                if(j==5)
                    break;

                if(str[i] == suit[j]){
                    str[i] = '.';
                    j++;
                }
            }

            if(j==5)
                cnt++;
            else
                break;

        }

        //cout<<"cnt: "<<cnt<<endl;


        printf("%d\n", l - cnt*5);

    }
    return 0;
}

