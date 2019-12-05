#include<stdio.h>
#include<stdlib.h>

int main()
{
	int c,r=0,i,j,temp;
	
	scanf("%d",&c);
	int arr[c];
	for(i=0;i<c;i++)
	{
		scanf("%d",&arr[i]);
		if(r<arr[i])
		r=arr[i];
	}
	int *max;
	char **box,**res;
	max=calloc(r,sizeof(int));
	box=(char **)calloc(c,sizeof(char *));
	for(i=0;i<c;i++)
	box[i]=calloc(r,1);
	for(i=0,j=0;i<c;i++,j=0)
	{
		while(arr[i]--)
		{
			box[i][j]='*';
			max[j++]++;
		}
	}
	res=(char **)calloc(c,sizeof(char *));
	for(i=0;i<c;i++)
	res[i]=calloc(r,1);
	for(j=0;j<r;j++)
	{	
		i=c-1;
		temp=max[j];
		while(temp--)
			res[i--][j]='*';
	}
	for(i=0;i<c;i++)
	{
		for(j=0,temp=0;j<r;j++)
		{	
		if(res[i][j]=='*')
			temp++;
		}
	printf("%d ",temp);
	}
	printf("\n");
	for(i=0;i<r;i++)
	printf("%d ",max[i]);
	printf("\n");
}
