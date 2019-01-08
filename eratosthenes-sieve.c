#include <stdio.h>
#include <math.h>
int main()
{
	int i,j,m,n;
	scanf("%d",&n);
	int a[100000];
	m = sqrt(n);
	for(i=0;i<=n;i++)
	{
		a[i] = i + 2;
	}
	for(i=0;i<=m;i++)
	{
		if(a[i] != 0)
		{
			for(j=i+1;j<=n;j++)
			{
				if(a[j] % a[i] == 0)
				{
					a[j] = 0;
				}
				else
				{
					j = j + 1;
				}
			}
		}
	}
	if(a[n-2] == 0)
	{
		printf("The number is Prime");
	}
	else
	{
		printf("The number is not Prime");
	}
	return 0;
}							
                   
