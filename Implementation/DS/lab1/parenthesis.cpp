#include<stdio.h>

struct stack
{
	char stk[100];
	int top;

	stack()
	{
		top=0;
	}
	void push(char t)
	{
		stk[top]=t;
		top++;
	}

	char pop()
	{
	    top--;
		char r=stk[top];
		//top--;
		return r;
	}
};
main()
{
	struct stack s;
    char str[100],k;
    int i=0,flag=0;
    scanf("%s",str);
    while(str[i])
	{
		if(str[i]=='(' || str[i]=='{' || str[i]=='[')
		{
			s.push(str[i]);
		}
		else
		{
			k=s.pop();

			if(k=='(')
			{
				if(str[i]!=')')
				{
					flag=1;
					break;
				}

			}

            else if(k=='{')
			{
				if(str[i]!='}')
				{
					flag=1;
					break;
				}

			}


			if(k=='[')
			{
				if(str[i]!=']')
				{
					flag=1;
					break;

				}
//printf("%d   [[[[[",flag);
			}

		}
		i++;
		}
		//printf("%d",flag);
	if(s.top!=0)
	{
		flag=1;
	}

	if(flag==1)
	{
		printf("Not balanced\n");

	}

	else
		printf("Balanced\n");

    return 0;
}
