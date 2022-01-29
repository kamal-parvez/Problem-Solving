#include<stdio.h>
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
        printf("%d",x.imag);
    printf("i\n");
}

complex create_complex(int r,int i)
{
    complex c;
    c.real=r;
    c.imag=i;
    return c;
}
complex complex_add(complex a,complex b)
{
    complex r =create_complex(a.real + b.real,a.imag+b.imag);
    return r;
}

int main()
{
    complex x = create_complex(10,-8);
    complex y = create_complex(20,30);
    print_complex(x);
    print_complex(y);
    complex z = complex_add(x,y);
    print_complex(z);
    return 0;
}
