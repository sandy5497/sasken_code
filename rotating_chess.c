#include<stdio.h>

int main()
{
	int r,c,n,i,j,k;
	char rotate;
	scanf("%d %c%d",&r,&rotate,&n);
	c=k=r;
//	if(n<0)n*=-1;
	n=(n*90)%360;
	if(n<0)
	n=360+n;
	printf("%d\n",n);
	if((n>0)&&(n<=90))n=1;
	else if((n>90)&&(n<=180))n=2;
	else if((n>180)&&(n<=270))n=3;
	char chess[r][c];
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	chess[i][j]=65+j;
	if(n==0)
	{
		for(i=r-1,k=c;i>=0;i--,k--,printf("\n"))
		for(j=0;j<c;j++)
		printf("%c%d ",chess[i][j],k);
	}
	else if(((n==1)&&(rotate=='C'))||((n==3)&&(rotate=='A')))
	{
		for(i=0;i<r;i++,printf("\n"))
		for(j=0;j<c;j++)
		printf("%c%d ",chess[j][i],j+1);
	}
	else if(((n==3)&&(rotate=='C'))||((n==1)&&(rotate=='A')))
	{
		for(i=r-1;i>=0;i--,printf("\n"))
		for(j=c-1,k=c;j>=0;j--,k--)
		printf("%c%d ",chess[j][i],k);
	}
	else if(((n==2)&&(rotate=='C'))||((n==2)&&(rotate=='A')))
	{
		for(i=0;i<r;i++,printf("\n"))
		for(j=c-1;j>=0;j--)
		printf("%c%d ",chess[i][j],i+1);
	}
	
}
