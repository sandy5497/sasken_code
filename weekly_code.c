#include<stdio.h>
#include<stdlib.h>

int Find_max(int *arr,int n)
{
    int max=0,i;
    for(i=0;i<n;i++)
    if(arr[i]>=max)
    max=arr[i];
    return max;
}
int Successful_Weeks(int *arr,int n,int max)
{
    int i,j,k,l,*icnt,ocnt=0,flag=0;
    icnt=(int *)calloc(max,sizeof(int));
    for(i=0;i<n;i++,flag=0)
    {
        for(l=0;l<max;l++)icnt[l]=0;
        for(j=1;j<=max;j++)
        {
            for(k=1;k<=max;k++)
                if(arr[i+k-1]==j)
                {
                 icnt[j-1]++;   
                }
        }
        for(l=0;l<max;l++)
        {
            if(icnt[l]!=1)flag=1;
        }
        if(flag==0)
        {
            ocnt++;
            i=i+max-1;
        }
    }
    return ocnt;
}
int main()
{
    int *arr,n,i,max=0;
    scanf("%d",&n);
    arr=(int *)calloc(n,sizeof(int));
 
 

    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    max=Find_max(arr,n);
    printf("%d",Successful_Weeks(arr,n,max));
}
