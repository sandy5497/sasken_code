#include<string.h>
#include<stdio.h>
int main()
{
	int N,i,j,count=0,min=99999;
	scanf("%d",&N);
	char arr[N],res[N];
	scanf("%s",arr);
	memset(res,'Y',N);
	for(i=0;i<=N;i++)
	{
		if(i)
		memset(res+(i-1),'R',1);
		for(j=0,count=0;j<N;j++)
		{
			if(arr[j]!=res[j])count++;
			printf("%c",res[j]);
		}
		printf(" %d",count);
		printf("\n");
		if(count<min)
		min=count;	
	}
	printf("%d\n",min);	
	
}
