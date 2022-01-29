#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;



int main(){
    int t;
    scanf("%d", &t);
    char str[1001];
    while(t--){
        scanf("%s", str);

        //printf("str: %s\n", str);

        int l = strlen(str);
        bool Q=false, J=false, K=false, A=false;

        for(int i=0; i<l; i++){
            if(str[i] == 'Q')
                Q = true;
            else if(str[i] == 'K')
                K = true;
            else if(str[i] == 'J')
                J = true;
            else if(str[i] == 'A')
                A = true;
        }

        if(Q==true && K==true && J==true && A==true){
            printf("Aaah muleke\n");
        }
        else{
            printf("Ooo raca viu\n");
        }
    }
    return 0;
}
