#include<stdio.h>

int main()
{
	int arr[20][20],i,j,k,n;
	int count = 1;

	printf("Enter the size of matrix\n");
	scanf("%d",&n);
	printf("\n");
	k = n/2;

	for(i=0;i<=k;i++)
	{
		for(j=i;j<=n-1-i;j++)
		{
			arr[i][j] = count++;
		}

		for(j=i + 1;j<=n-1-i;j++)
		{
			arr[j][n-1-i] = count++;
		}
		
		for(j=n-2-i;j>=i;j--)
		{
			arr[n-1-i][j] = count++;
		}

		for(j=n-2-i;j>i;j--)
		{
			arr[j][i] = count++;
		}
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}


	return 0;
}
