#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[]={1,2,3,4,5},sum=0,j,i;
	for(i=1;i<5;i++)
	{
	
		if(arr[i]<arr[i-1])	
	{
		arr[i]=arr[i-1]+1;
		
	}
	sum+=arr[i-1];
	}
	sum+=arr[4];
	printf("%d\n",sum);
}
