#include<stdio.h>
#include<string.h>
int main()
{
    char pn[10][10],t[10];
    int arr[10],bur[10],star[10],CT[10],tat[10],wt[10],i,j,n,temp;
    int totwt=0,tottat=0;
    printf("Enter the number of processes:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("Enter the ProcessName, Arrival Time& Burst Time:");
        scanf("%s%d%d",&pn[i],&arr[i],&bur[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                temp=bur[i];
                bur[i]=bur[j];
                bur[j]=temp;
                strcpy(t,pn[i]);
                strcpy(pn[i],pn[j]);
                strcpy(pn[j],t);
            }
 
        }
    }
    for(i=0; i<n; i++)
    {
        if(i==0)
            star[i]=arr[i];
        else
            star[i]=CT[i-1];
        wt[i]=star[i]-arr[i];
        CT[i]=star[i]+bur[i];
        tat[i]=CT[i]-arr[i];
    }
    printf("\nPName\tArrtime\tBurtime\tWaitTime Start TAT\tCT\t");
    for(i=0; i<n; i++)
    {
        printf("\n%s\t%3d\t%3d\t%3d\t%3d\t%2d\t%2d",pn[i],arr[i],bur[i],wt[i],star[i],tat[i],CT[i]);
        totwt+=wt[i];
        tottat+=tat[i];
    }
    printf("\nAverage Waiting time: %0.2f",(float)totwt/n);
    printf("\nAverage Turn Around Time:%0.2f",(float)tottat/n);
    return 0;
}
