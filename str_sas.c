#include<stdio.h>
#include<stdlib.h>

char *Getstring(void)
{
	char *p=NULL;
	int i=0;
	do{
		p=(char *)realloc(p,i+1);
		p[i]=getchar();
	}while(p[i++]!='\n');
	p[i-1]=0;
	return p;
}

int main()
{
	int n,i,j;
	char **str=NULL,*opstr=NULL;
	scanf("%d",&n); 
	str=(char **)calloc(n,sizeof(char *));
	for(i=0;i<n;i++)
		str[i]=Getstring();
	for(i=0;i<n;i++)
		puts(str[i]);
}
