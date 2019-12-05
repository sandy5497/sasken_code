#include<stdlib.h>
#include<stdio.h>
#include<math.h>
float Equa(int x,int s,int **arr)
{
	int i,j,a,b;
	float max=0,res;
	for(i=0;i<x-1;i++)
	for(j=i+1;j<x;j++)
	{
		b=arr[j][1]-arr[i][1];
		a=arr[j][0]-arr[i][0];
		res=(float) sqrt((b*b)+(a*a))/s;
		if(max<res)
			max=res;
	}
	return max;
}
int main()
{
	int x,s,**arr,i,j;
	scanf("%d",&x);
	arr=(int **)calloc(x,sizeof(int *));
	for(i=0;i<x;i++)
	{
	arr[i]=(int *)calloc(2,sizeof(int));
	}
	scanf("%d",&s);
	for(i=0;i<x;i++)
	for(j=0;j<2;j++)
	{
		scanf("%d",&arr[i][j]);
	}
	printf("%f\n",Equa(x,s,arr));
	
}
