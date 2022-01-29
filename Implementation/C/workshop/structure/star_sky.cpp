#include<stdio.h>
#include<math.h>

struct point
{
    double x,y;
}s[100];

struct triangle
{
    point a,b,c;
    double area()
    {
        double ar;
        ar= 0.5*(a.x*(b.y-c.y)+b.x*(c.y-a.y)+c.x*(a.y-b.y));
        return ar;
    }
};

struct circle
{
    point a,b;
    double area()
    {
        double ar,pi=acos(-1);
        return ar=pi*((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
    }
};

int main()
{
    int n,q,p,i,j,k,l;
    double abul[100];
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%lf %lf",&s[i].x,&s[i].y);
    }

    scanf("%d",&q);
    for(i=0;i<q;i++)
    {
        scanf("%d",&p);
        if(p==2)
        {
            scanf("%d %d",&j,&k);
            circle n;
            n.a=s[j];
            n.b=s[k];
            abul[i]=n.area();
        }
        if(p==3)
        {
            scanf("%d %d %d",&j,&k,&l);
            triangle m;
            m.a=s[j];
            m.b=s[k];
            m.c=s[l];
            abul[i]=m.area();
        }
    }
    for(i=0;i<q;i++)
    {
        printf("%lf\n",abul[i]);
    }
    return 0;
}
