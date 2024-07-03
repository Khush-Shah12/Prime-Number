#include<stdio.h>
int prime(int);

void main()
{
	int no,p;

	printf("\nEnter any Number : ");
	scanf("%d",&no);

	p=prime(no);

	if(p==1)
	{
		printf("\n%d is prime",no);
	}
	else
	{
		printf("\n%d is not prime",no);
	}
}

int prime(int n)
{
	int i;

	for(i=2;i<=(n/2);i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}


