#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,n,i,j,c,x,y,k,l=0,flag=1;
	scanf("%d%d",&a,&b);
	n=b-a+1;
//	printf("%d\n",n);
	int arr[n];
	for(j=0;j<n;j++)
		arr[j]=a+j;
	scanf("%d",&c);
	//printf("%d\n",c);
	int cor[c][2],t1,t2;
	for(i=0;i<c;i++)
	for(j=0;j<2;j++)	
	{
		scanf("%d",&cor[i][j]);
	}
	for(i=0;i<c;i++)
	{
		x=cor[i][0];
		y=cor[i][1];
		for(j=0;j<n;j++)
		{
			if(arr[j]==x)
			{
				
				for(k=j;((arr[k]<=y)&&(k<n));k++)
					arr[k]=0;
				k--;
				for(l=j-1;l>0;l--,flag=1)
				{
					 					
					if(arr[l]!=0)
					{
						printf("%d ",arr[l]);flag=0;break;
					}
					
				}
					if(l==-1){printf("* ");goto lable;}
					if (flag!=0) printf("* ");
				lable:
				for(l=k;l<n;l++,flag=1)
				{					
					if(arr[l]!=0)
					{
						printf("%d\n",arr[l]);flag=0;break;
					}
					
				}
				    if(l==n){printf("*\n");break;}
					if(flag!=0){ printf("*\n");break;}	
			}
							
		}
	}
}
