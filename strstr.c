#include<string.h>
#include<stdio.h>
int main()
{
	char buff1[]="abcdef",buff2[]="abcdefghi";
	char *ptr=NULL;
	ptr=strstr(buff1,buff2);
	if(ptr)
		printf("successfull..\n");
	else    printf("fail...\n");
	
}

