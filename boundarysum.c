#include<stdio.h>
int boundary(int a[20][20],int m)
{   int i,j,t;
    int sum=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {   if(i==0||i==m-1)
                sum=sum+a[i][j];
            else
            {
                if((j==0)||(j==(m-1)))
                    sum=sum+a[i][j];
            }
        }
    }
    return sum;

}
int main()
{
    int i,j,k,m,n,flag,sum=0,t,bsum;
    int a[20][20];
    printf("Enter the order: ");
    scanf("%d",&m);
    printf("Enter ele: \n");


    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    }



    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
            printf("%d      ",a[i][j]);
        printf("\n");
    }


    bsum=boundary(a,m);
    printf("%d\n",sum);


    for(i=0;i<m;i++)

    {
        for(j=0;j<m;j++)

        {       sum=0;
                t=a[i][j];

                for(k=1;k<t;k++)
                {
                    if(t%k==0)
                        sum=sum+k;
                }
                if(a[i][j]==sum)
                    a[i][j]=bsum;

        }
    }




    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
            printf("%d     ",a[i][j]);
        printf("\n");
    }



}
