#include<stdio.h>
#include<string.h>

struct ComplexNumber
{
    int realPart;
    int complexPart;
};

ComplexNumber Adder(struct ComplexNumber A,struct ComplexNumber B)
{
    struct ComplexNumber temp;
    temp.realPart=A.realPart + B.realPart;
    temp.complexPart= A.complexPart + B.complexPart;
    return temp;
}

main()
{
    struct ComplexNumber A,B;
    A.realPart=2;
    A.complexPart=5;
    B.realPart=5;
    B.complexPart=-2;

    struct ComplexNumber ans=Adder(A,B);

    printf("%d+%di\n",ans.realPart,ans.complexPart);
    return 0;
}
