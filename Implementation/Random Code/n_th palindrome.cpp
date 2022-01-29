#include<stdio.h>
    int check_palin(int num)
    {
      int n1 = num;
      int rev = 0;
      while (n1){
            rev = (rev * 10)+(n1 % 10);
            n1 = n1 / 10;
      }
      if (rev == num)
            return 1;
      else
            return 0;
    }


    int main()
    {
      int i = 0;
      int count = 0;
      int n; /* nth palindrome that needs to be found out
                 the value of n should be greater then 0*/
      printf("Enter the value of n[n > 0]\n ");
      scanf("%d",&n);
      while (count != n){
            if (check_palin(i)){
                 count++;
            }
            i++;
      }
      printf("%dth Palindrome is %d\n", n, i-1);
      return 0;
    }
