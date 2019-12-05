#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int Remove(char *res)
{
	int len,i,j;char temp;
	len=strlen(res);	 
	for(i=len-1;i>0;i--)
	for(j=0;j<i;j++)
	{
		if(res[j]>=res[j+1])
		{
			temp=res[j+1];
			res[j+1]=res[j];
			res[j]=temp;
		}
	}
	puts(res);
	for(i=0;i<len;i++)
	{
		if(res[i]==res[i+1])
		{
			memmove(res+i,res+i+1,strlen(res+i+1)+1);
			i--;len--;
		}
	}
	puts(res);
	return strlen(res);
}
int main()
{
	int n,i,j,len,flag,max=0,prev=0;
	scanf("%d",&n);
	char str[12],res[72]={0};
	for(i=0;i<n;i++)
		{
			
			scanf("%s",str);
			prev=strlen(str);
			if(max<=prev)
			{
				max=prev;
			}
			for(j=0;str[j];j++)if(str[j]!=str[j+1])flag=1;
			strcat(res,str);
		}
	if(flag==0)
	printf("%d\n",max);		
	else printf("%d\n",Remove(res));
	 
}
