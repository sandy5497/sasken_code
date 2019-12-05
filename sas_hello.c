#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int cnt=0;
char *Getstring(void)
{
	int i=0;
	char *p=NULL;
	do{
		p=(char *)realloc(p,i+1);
		p[i]=getchar();
	}while(p[i++]!=10);
	p[i]=0;
	return p;
}

void Check_string(char *ptr)
{
	int i;
	char *p;
	for(i=0;ptr[i];i++)
	{
		if(isupper(ptr[i]))
		ptr[i]=ptr[i]+32;
	}
	p=ptr;
	puts(ptr);
	while(p)
	{
		p=strstr(p,"sasken");
		if(p!=NULL)
		{
			p=p+strlen("sasken");
			cnt++;
		}
	}
	puts(ptr);
	return;
}

int main()
{
	char *ptr=NULL;
	ptr=Getstring();
	puts(ptr);
	Check_string(ptr);
	puts(ptr);
	if(cnt==0)
		puts("Hello, World!");
	else
	{
		printf("%s","Hello,Sasken");
		while(cnt)
		{
			printf("%c",'!');
			cnt--;
		}
	}
}

