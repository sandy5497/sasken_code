#include<stdio.h>
int main()
{
	int n,i=0,m,l,temp1;
	double j=0,k=0,temp;
	scanf("%d",&n);
	m=n;
	k=(double)n;
	char str[n];
	double arr[n];
	char res[n];
	scanf("%s",str);
	while(str[i])
	{
		res[i]=i+1;
		arr[i]=j;
		k=k/2;			
		if(str[i]=='r')j=j+k;
		else j=j-k;
		i++;
	}
	for(i=0;i<m;i++)
	printf("%d %f\n",res[i],arr[i]);
	 for(i=0;i<m-1;i++)
		for(l=0;l<m-i-1;l++)
	{
		if(arr[l]>arr[l+1])
		{
			temp=arr[l];
			arr[l]=arr[l+1];
			arr[l+1]=temp;
			temp1=res[l];
			res[l]=res[l+1];
			res[l+1]=temp1;
		}
	}
	printf("-------------------------------------------------");
	for(i=0;i<m;i++)
	printf("%d %lf\n",res[i],arr[i]);

}
