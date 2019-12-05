#include<stdio.h>
#include<stdlib.h>

void Check_AD( int *row,int *col,int e2,int x,int y,int n )
{
    int ecflag=1,i,j;
     if(e2==0)
        {
            for(i=0;i<n;i++)
            {
                if((e2+1)==col[i])
                {  printf("%s","DEAD!");
                    exit(0);
                }
            }
           //printf("%s","ALIVE!");
           ecflag=1;
        }
        else if (e2==y-1)  
        {
             for(i=0;i<n;i++)
            {
                if((e2-1)==col[i])
                {  printf("%s","DEAD!");
                    exit(0);
                }
            }
           // printf("%s","ALIVE!");
           ecflag=1;
        }
        else
        {
                for(i=0,ecflag=1;i<n;i++)
            {
                if((e2+1)==col[i])
                {
                    ecflag=0;break;
                }
            }
            if(ecflag==0)
            {
            for(i=0,ecflag=1;i<n;i++)
             {
                if((e2-1)==col[i])
                {
                    ecflag=0;break;
                }
             }
            }
            if(ecflag==1)printf("%s","ALIVE!");
             else printf("%s","DEAD!");
            exit(0);
           //  printf("%s","ALIVE!");
        }
}
int main()
{
    int *row=NULL,*col=NULL;
    int x,i,j,y,n,e1,e2, rowflag=0,colflag=0,erflag=1,ecflag=1,erflag1=1,erflag2=1;
    scanf("%d%d%d",&x,&y,&n);
    row=(int *)calloc(n,sizeof(int));
    col=(int *)calloc(n,sizeof(int));
    for(i=0,j=0;i<n;i++,j++)
        scanf("%d%d",&row[i],&col[j]);
    scanf("%d%d",&e1,&e2);
  /*  for(i=0,j=0;i<n;i++,printf("\n"))
        printf("%d %d",row[i],col[i]);*/
    if((e2==0)&&(e2==y-1))
    {
        printf("%s","DEAD!");
        exit(0);
    }
    for(i=0,j=0;i<n;i++,j++)
    {
        if(e1==row[i])rowflag=1;
        if(e2==col[j])colflag=1;
    }
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    if((rowflag==0) && (colflag==0) )
    {
        printf("%s","ALIVE!");
        exit(0);
    }
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    else if((rowflag==1) && (colflag==0))
    {
        if(e1==0)
        {
            for(i=0;i<n;i++)
            {
                if((e1+1)==row[i])
                {  printf("%s","DEAD!");
                    exit(0);
                }
            }
            printf("%s","ALIVE!");
        }
        else if (e1==x-1)
        {
             for(i=0;i<n;i++)
            {
                if((e1-1)==row[i])
                {  printf("%s","DEAD!");
                    exit(0);
                }
            }
           printf("%s","ALIVE!");
        }
        else
        {
             for(i=0,erflag=1;i<n;i++)
            {
                if((e1+1)==row[i])
                {
                    erflag=0;
                }
            }
            if(erflag==0)
            {
            for(i=0,erflag=1;i<n;i++)
             {
                if((e1-1)==row[i])
                {
                    erflag=0;
                }
             }
            }
            if(erflag==1)printf("%s","ALIVE!");
            else printf("%s","DEAD!");
            exit(0);
            
          
        }
    }
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    else if((rowflag==0) && (colflag==1))
    {
        if(e2==0)
        {
            for(i=0;i<n;i++)
            {
                if((e2+1)==col[i])
                {  printf("%s","DEAD!");
                    exit(0);
                }
            }
            printf("%s","ALIVE!");
        }
        else if (e2==y-1)  
        {
             for(i=0;i<n;i++)
            {
                if((e2-1)==col[i])
                {  printf("%s","DEAD!");
                    exit(0);
                }
            }
            printf("%s","ALIVE!");
        }
        else
        {
                for(i=0,ecflag=1;i<n;i++)
            {
                if((e2+1)==col[i])
                {
                    ecflag=0;break;
                }
            }
            if(ecflag==0)
            {
            for(i=0,ecflag=1;i<n;i++)
             {
                if((e2-1)==col[i])
                {
                    ecflag=0;break;
                }
             }
            }
            if(ecflag==1)printf("%s","ALIVE!");
             else printf("%s","DEAD!");
            exit(0);
           //  printf("%s","ALIVE!");
        }
    }
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    else
    {
         if(e1==0)
        { 
            for(i=0;i<n;i++)
            {
                if((e1+1)==row[i])
                {  printf("%s","DEAD!");
                    exit(0);
                }
            }
            //printf("%s","ALIVE!");
            erflag=1;
            Check_AD(row,col,e2,x,y,n);
        }
         else if (e1==x-1)
        {
             for(i=0;i<n;i++)
            {
                if((e1-1)==row[i])
                {  printf("%s","DEAD!");
                    exit(0);
                }
            }
          // printf("%s","ALIVE!");
         Check_AD(row,col,e2,x,y,n);
        }
         else
        {
             for(i=0,erflag1=1;i<n;i++)
            {
                if((e1+1)==row[i])
                {
                    erflag=0;erflag1=0;
                }
            }
            //if(erflag==0)
           // {
            for(i=0,erflag2=1;i<n;i++)
             {
                if((e1-1)==row[i])
                {
                    erflag=0;erflag1=0;
                }
             }
           // }
            if(!(erflag1==0)&&(erflag==0))Check_AD(row,col,e2,x,y,n);
            else printf("%s","DEAD!");
            exit(0);
            
          
        }
        
    }
}
//*/*/*////*//*//*//*/*/*/*/*//////*/*/*/*/*/*/*/*/*/*/*/*////*/*/END*/*/**/*/*/*END/*//*//*/*/*////*//*////END**/*//*//*/*/**/*//*//*/*//*//*/


