#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c,x,y,z,n,i,flag=0;
	char str[20]="No solution.";
	scanf("%d",&n);
	for(i=0;i<n;i++,flag=0)
	{
		scanf("%d%d%d",&a,&b,&c);
		for(x=-100;x<200;x++)
		{
			for(y=x+1;y<200;y++)
			{
				for(z=y+1;z<200;z++)
				{
				if(((x+y+z)==a)&&((x*y*z)==b)&&(((x*x)+(y*y)+(z*z))==c))
				{
						flag=1;
						printf("%d %d %d\n",x,y,z);
						break;	
				}
				}
			if(flag==1)break;
			}
		if(flag==1)break;
		}
        if(flag==0) printf("%s\n",str);
	}
}
