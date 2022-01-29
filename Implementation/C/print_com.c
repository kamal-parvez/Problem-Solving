 #include<stdio.h>
 #include<string.h>

 struct complex
 {
     int real;
     int img;
 };

 int print(complex x)
 {
     int img;
     printf("%d",x.real);
     if(img<0)
        printf("%d",x.img);
     else
        printf("+%d",x.img);
     printf("i\n");
 }
 complex create_complex(int r,int i)
 {
     complex c;
     c.real=r;
     c.img=i;
     return c;
 }
 int main()
 {
     complex x=create_complex(5,3);
     complex y=create_complex(-10,2);
     print(x);
     print(y);
     return 0;
 }
