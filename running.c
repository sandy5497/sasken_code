#include<stdio.h>
int main()
{
	int n,c=0;
	scanf("%d",&n);
	int arr1[n],arr2[n],i,k,m,j,count=0;
	for(j=0;j<n;j++)
	{
		scanf("%d",&arr1[j]);
	}
	for(j=0;j<n;j++)
	{
		scanf("%d",&arr2[j]);
	}
	for(i=n-1;i>=0;i--)
	{
		for(j=0;j<n;j++)
			if(arr1[i]==arr2[j])
			{
			for(m=i-1;m>=0;m--)
			for(k=j+1;k<n;k++)
			{
				if(arr1[m]==arr2[k])
				{
					count++;
					goto label;
				}
			}
			
			}
		label:
			c++;
	}
	printf("%d\n",count);
}
