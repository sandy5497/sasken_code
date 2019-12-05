#include<stdio.h>
int main()
{
	int i,j;
	for(i=0;i<10;i++)
	{	
		for(j=0;j<10;i++)
		{
			if(i==2)break;
		}
	printf("out of the inner loop...\n");
	}
	printf("out of the outer loop...\n");
}
