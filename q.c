#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int n,arr[100],**que,*grp,data,gid,cnt=0;
struct q{
	int mem;
	int id;
	struct q*next;
};
struct q *head=NULL;
int GRP_ID(int dat)
{
	int i,j;
	for(i=0;i<n;i++)
	for(j=0;j<grp[i];j++)
		if(data==que[i][j])
		return i;
		
}
void ENQ(void)
{
	struct q *nu=NULL;	
	nu=(struct q *)calloc(1,sizeof(struct q ));
	scanf("%d",&data);
	gid=GRP_ID(data);
	nu->mem=data;
	nu->id=gid;
	if(head==NULL)
	{
		head=nu;
	}
	else
	{
		struct q *temp=head,*prev=NULL,*front=NULL;
		while((temp->next)&&(temp->id != gid))
		{
			prev=temp;
			temp=temp->next;
		}
		if(temp->next==NULL)
		{
			temp->next=nu;
		}	
		else
    		{
			prev=temp;
			while((temp->next!=NULL)&&(temp->next->id==gid))
			{
				
				prev=temp;
				temp=temp->next;
			}
			if(temp->next==NULL)
			{
				temp->next=nu;
			}
			else
     			{
				front=temp->next;
				prev->next=nu;
				nu->next=front;
			}
			
		}
	}			
	
}

void DQ(void)
{
	struct q *temp=head;	
	arr[cnt++]=head->mem;
	head=head->next;
	free(temp);
	temp=NULL;
}

void STOP(void)
{
	int i;	
	for(i=0;i<cnt;i++)
		printf("%d\n",arr[i]);
	exit(0);
}

int main()
{
	int i,j;	
	char buff[20];	
	scanf("%d",&n);
	que=(int **)calloc(n,sizeof(int *));
	grp=(int *)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&grp[i]);
		que[i]=(int *)calloc(grp[i],sizeof(int));
		for(j=0;j<grp[i];j++)
		{
			scanf("%d",&que[i][j]);

		}
	}
	while(1)
	{	
		scanf("%s",buff);
		if(!strcmp(buff,"ENQUEUE"))
		ENQ();
		else if(!strcmp(buff,"DEQUEUE"))
		DQ();
		else
		STOP();
	}
}
