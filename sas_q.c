#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cnt=0;  int n,i,**que=NULL,*grp=NULL, j;
struct ENQ{
    int enq;
    int grp_no;
    struct ENQ *next;
};
struct ENQ *creatnode(void)
{
    struct ENQ *nu=NULL;
    nu=(struct ENQ *)calloc(++cnt,sizeof(struct ENQ));
    
    return nu;
}

void enque(struct ENQ *ptr)
{
    
    if(ptr==NULL)
    {
        ptr=creatnode();
        scanf("%d",ptr->enq);
        for(i=0;i<n;i++)
        {
            for(j=0;j<grp[i];j++)
            if(ptr->enq==que[i][j])
            ptr->grp_no=i;
        }
        
    }
				
					
				
		
}
int main()
{
    struct ENQ *head=NULL;
    int n,i,**que=NULL,*grp=NULL, j;
    char str[20];
    scanf("%d",&n);
    que=(int **)calloc(n,sizeof(int));
    grp=(int *)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&grp[i]);
        que[i]=(int *)calloc(grp[i],sizeof(int));
        for(int j=0;j<grp[i];j++)
            scanf("%d",&que[i][j]);
    }
 /*  printf("%d\n",n);
    for(i=0;i<n;i++,printf("\n"))
    {
         printf("%d\t",grp[i]);
         for(j=0;j<grp[i];j++)
         printf("%d\t",que[i][j]);
    }*/
    while(1)
    {
        scanf("%s",str);
        if(!strcmp(str,"ENQUEUE"))
        enque(head);
        
    }
    
   
    
}
