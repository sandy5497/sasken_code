#include<stdio.h>
#include<stdlib.h>

int main()
{
	int r,i,j,c,cnt=0;
	scanf("%d%d",&r,&c);
	int arr[r][c];
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			{
				scanf("%d",&arr[i][j]);
				
			}
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			if(arr[i][j]==1)cnt++;
	for(i=0;i<r;i++)
		for(j=0;j<c-1;j++)
			{
				if((arr[i][j]==1)&&(arr[i][j+1]==1))
				cnt++;
			}
	for(i=0;i<c;i++)
		for(j=0;j<r-1;j++)
			{
				if((arr[j][i]==1)&&(arr[j+1][i]==1))
				cnt++;
			}
	for(i=0;i<r;i++)
		for(j=0;j<c-2;j++)
			{
				if((arr[i][j]==1)&&(arr[i][j+1]==1)&&(arr[i][j+2]==1))
				cnt++;
			}
	for(i=0;i<c;i++)
		for(j=0;j<r-2;j++)
			{
				if((arr[j][i]==1)&&(arr[j+1][i]==1)&&(arr[j+2][i]))
				cnt++;
			}
	printf("%d",cnt);
}
