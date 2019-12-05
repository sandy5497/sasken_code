#include<stdio.h>
int main()
{
	long int n,i,j,k,l,m;
	int x,y,z,w;
	scanf("%ld%d%d%d%d",&n,&x,&y,&z,&w);
	long arr[3][3];int count=0,s1=0,s2=0,s3=0,s4=0;

	arr[0][1]=x;
	arr[1][0]=y;
	arr[2][1]=w;
	arr[1][2]=z;
//	for(m=1;m<=n;m++)
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	for(k=1;k<=n;k++)
	for(l=1;l<=n;l++)
	{	
		s1=s2=s3=s4=0;
	//	arr[1][1]=m;
		arr[0][0]=i;
		arr[0][2]=j;
		arr[2][0]=k;
		arr[2][2]=l;
//		if((i==j)||(i==k)||(i==l)||(j==k)||(j==l)||(k==l))break;
		s1=arr[0][0]+arr[0][1]+arr[1][0];
		s2=arr[0][2]+arr[0][1]+arr[1][2];
		s3=arr[2][0]+arr[2][1]+arr[1][0];
		s4=arr[2][2]+arr[2][1]+arr[1][2];
		if((s1==s2)&&(s1==s3)&&(s1==s4))count++;
	}
	printf("%ld",count*n);
	
}
