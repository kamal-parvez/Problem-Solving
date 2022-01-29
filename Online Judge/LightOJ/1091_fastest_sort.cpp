#include<iostream>
using namespace std;

void print_var(char i,int n)
{
    int j=i%97;

    if(j>=n)
        return;
    if(j<n-1)
      cout<<"int "<<i<<", ";
    else
     cout<<"int "<<i;
     print_var(i+1,n);
}

int main()
{
    int t,n,i;
    cin>>t;

    for(i=1;i<=t;i++)
    {
        cin>>n;

        cout<<"Case "<<i<<":"<<endl;

        cout<<"void print( ";

        print_var('a',n);

        cout<<" ) {"<<endl;

        cout<<" printf( "<<%d %d %d\n", a, b, c );
}
void sort( int a, int b, int c ) {
 if( a < b )
  if( a < c )
   if( b < c )
    print( a, b, c );
   else
    print( a, c, b );
  else
   print( c, a, b );
 else
  if( b < c )
   if( a < c )
    print( b, a, c );
   else
    print( b, c, a );
  else
   print( c, b, a );
}
    }
}
