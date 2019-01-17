#include <stdio.h>
#include <math.h>
#include <time.h>
int main()
{
	clock_t start, end;
    double cpu_time_used;
    start = clock();
	int n,i,j,k=2,l=2,m;
	printf("Enter the number you want to check");
	scanf("%d",&n);
	m =sqrt(n);
	int a[n][m];
	for(i=2;i<<=n;i++)
	{
		a[i][0] = i;
	}
	for(j=1;j<=m;j++)
	{
		for(i=2;i<=n;i++)
		{
			if(a[i][j] % a[k][0] != 0)
			{
				a[l][j] = a[i][j];
				l++;
			}
		}
		k++;
	}
	for(i=2;i<n;i++)
	{
		if(a[i][m] == n)
		{
			printf("The number is Prime");
		}
		else
		{
			printf("The number is not prime");
		}
	}
	 end = clock();
     cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
     printf("%lf", cpu_time_used );
     return 0;
}						
