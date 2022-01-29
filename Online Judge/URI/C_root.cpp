#include <iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main() {

    int n;

    while(scanf("%d", &n) == 1  &&  n != -1){

        int b = n % 257;
        int c = n % 193;

        double res = b * b - 4 * c;

        if(n == 0 || c == 0){
            printf("Bom\n");
        }
        else{
            printf("So o ouro\n");
        }

    }
    return 0;
}

