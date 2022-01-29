#include<bits/stdc++.h>
using namespace std;

int main()
{
    int *marks;

    int i,n;

    cout<<"Enter the number of students : ";
    cin>>n;

    marks=(int *)malloc(sizeof(int)*n);

    if(marks==NULL)
    {
        perror("Memory allocation failed");
        return EXIT_FAILURE;
    }

    cout<<"Enter the marks"<<endl;

    for(i=0;i<n;i++)
    {
        cin>>marks[i];
    }

    cout<<"The values are"<<endl;

    for(i=0;i<n;i++)
        cout<<marks[i]<<endl;

    free(marks);

    return 0;

}
