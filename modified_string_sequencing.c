#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio_ext.h>

int main()
{
	char **arr,b[300],*ptr,*ptr1,*brr,*crr;
	int N,i,m,n,j,l,max=0,k,z,flag=1;

	scanf("%d",&N);
	__fpurge(stdin);
	arr=(char**)calloc(N,sizeof(char*));
	for(i=0;i<N;i++)
	{
		arr[i]=(char*)calloc(50,sizeof(char));
		scanf("%s",arr[i]);
	}

	for(m=0;m<N;m++)
		for(n=m+1;n<N;n++)
			if(strcmp(arr[m],arr[n])>0)
			{
				char *temp;
				temp=(char*)calloc(50,sizeof(char));

				strcpy(temp,arr[m]);
				strcpy(arr[m],arr[n]);
				strcpy(arr[n],temp);
			}
  	crr=(char *)calloc(N*50,sizeof(char));
	brr=(char *)calloc(50,sizeof(char));
	z=0;
		for(z=0;((z<N-1)&&(arr[z+1]!=0));z++,flag=1)
		 {
			l=strlen(arr[z]);

			strcpy(brr,arr[z]);

			//printf("%s",brr);

			for(i=0;i<l;i++)
			{
				if(ptr=strstr(arr[z+1],brr+i))
				{
					strcpy(brr+i,ptr);
					strcpy(arr[z+1],brr);
					flag=0;
					break;
				}
			}
			if(flag==1)
			{
				strcat(brr,arr[z+1]);
				strcpy(arr[z+1],brr);
			}			
		}
	//printf("\ncrr=%s\n",arr[z]);
	printf("%lu",strlen(arr[z]));

}	




