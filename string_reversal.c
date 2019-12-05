#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *getstring(void)
{
	char *p=NULL;
	int  i=0;
	do{
		p=realloc(p,i+1);
		p[i]=getchar();
	}while(p[i++]!=10);
	p[i-1]=0;
	return p;
}
char *strrev(char *str,int s1,int e1)
{
	char *s=str+s1;
	char *e=str+e1;
	char  temp;
	while(s1<e1)
	{
		temp=*(str+s1);
		*(str+s1)=*(str+e1);
		*(str+e1)=temp;
		s1++,e1--;
	}
	return str;
}
int main()
{
	int i,len,temp,j,k,start,end,T;
	char *str=NULL;
	str=getstring();
	len=strlen(str);
	scanf("%d",&T);
	for(k=0;k<T;k++)
	{
		scanf("%d%d",&i,&j);
		start=i%len;
		if(start<0)start=len+start;
		end=j%len;
		if(end<0)end=len+end;
		if(start>end)
		{
			temp=end;
			end=start;
			start=temp;
		}
		/*puts(str);*/
		printf("%d %d\n",start,end);
		str=strrev(str,start,end-1);
	}
	printf("%s\n",str);
}
