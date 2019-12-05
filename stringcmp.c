#include<stdio.h>
#include<string.h>
int main()
{
	char buff[200];
	scanf("%[^\n]",buff);
//	puts(buff);
	if(strcmp(buff,"SANDEEP")==0)
	{
		printf("matching...\n");
	}
	else printf("go ahead...\n");
}
