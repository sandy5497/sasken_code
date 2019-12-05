#include<stdio.h>
#include<string.h>
#include<stdlib.h>
static int i=0;

void fill(char *str)
{	
	char *ptr=str;
	while(*ptr)
	{
		if(*ptr=='?')
		{
			if(i==0)*ptr='E';
			else if(i==1)*ptr='W';
			else if(i==2)*ptr='N';
			else *ptr='S';
		}
	ptr++;
	}
	i++;	 
}
int main()
{
	char ptr[50],str[50];
	scanf("%s",str);
	int x1=0,y1=0,max=0,res=0,len=0;
	 
	while(i<4)
	{
	strcpy(ptr,str);
	x1=0,y1=0,len=0;
	fill(ptr);
	 
	while(*(ptr+len)!=0)
	{
		if(*(ptr+len)=='E')
			x1++;
		else if(*(ptr+len)=='N')
			y1++;
		else if(*(ptr+len)=='W')
			x1--;
		else y1--;
		len++;
	}
	res=abs(0-x1)+abs(0-y1);
	if(res>max)max=res;	
	}
	printf("%d\n",max);
}
