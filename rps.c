#include<stdio.h>
#include<stdlib.h>
int main()
{
	int r,c,t,i,j,k;
	scanf("%d%d%d",&r,&c,&t);
	char **game=(char **)calloc(r,sizeof(char *));
	for(i=0;i<r;i++)
	game[i]=calloc(c,sizeof(char));
	char **res=(char **)calloc(r,sizeof(char *));
	for(i=0;i<r;i++)
	res[i]=calloc(c,sizeof(char));
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			{
			scanf(" %c",&game[i][j]);
			}
	for( k=0;k<t;k++)
	{
		
	  for(i=0;i<r;i++)
	   for(j=0;j<c;j++)
	    {	
		if(game[i][j]=='R')
		{
		if((((j-1)>=0)&&(game[i][j-1]=='P'))||((j+1<c)&&(game[i][j+1]=='P'))||(((i-1)>=0)&&(game[i-1][j]=='P'))||((i+1<r)&&(game[i+1][j]=='P')))
				res[i][j]='P';
		else res[i][j]='R';
		}
		else if(game[i][j]=='S')
		{
		if((((j-1)>=0)&&(game[i][j-1]=='R'))||((j+1<c)&&(game[i][j+1]=='R'))||(((i-1)>=0)&&(game[i-1][j]=='R'))||((i+1<r)&&(game[i+1][j]=='R')))
				res[i][j]='R';
		else res[i][j]='S';
		}
		else
		{
		if((((j-1)>=0)&&(game[i][j-1]=='S'))||((j+1<c)&&(game[i][j+1]=='S'))||(((i-1)>=0)&&(game[i-1][j]=='S'))||((i+1<r)&&(game[i+1][j]=='S')))
				res[i][j]='S';
		else res[i][j]='P';
		}
	
	  }
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	game[i][j]=res[i][j];
	}
	for(i=0;i<r;i++,printf("\n"))
		for(j=0;j<c;j++)
	printf("%c",res[i][j]);
}
