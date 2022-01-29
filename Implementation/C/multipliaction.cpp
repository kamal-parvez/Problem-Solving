#include<stdio.h>
#include<string.h>
struct complex
{
    int real;
    int imag;
};
void print_complex(complex x)
{
    int imag;
    printf("%d",x.real);
    if(imag<0)
        printf("%d",x.imag);
    else
        {
            printf("+");
            printf("%d",x.imag);
        }
    printf("i\n");
}
complex create_complex(int r,int i)
{
    complex c;
    c.real=r;
    c.imag=i;
    return c;
}
complex mul(complex a,complex b)
{
    complex z = create_complex(a.real*b.real-a.imag*b.imag,a.real*b.imag+a.imag*b.real);
    return z;
}

int main()
{
    complex x =create_complex(10,-8);
    complex y = create_complex(5,-6);
    print_complex(x);
    print_complex(y);
    complex z=mul(x,y);
    print_complex(z);
    return 0;
}
