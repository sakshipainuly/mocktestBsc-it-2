
#include<stdio.h>

#include<conio.h>

void main()

{


int bt[4]={0},at[4]={0},tat[4]={0},wt[4]={0},ct[4]={0};

int i,k,n=4,sum=0;

float totalTAT=0,totalWT=0;


printf("Enter Arrival time and Burst time for each process:\n");

for(int i=0;i<n;i++)

{

     printf("Arrival time of process[%d]: ",i+1);

     scanf("%d",&at[i]);

     printf("Burst time of process[%d]: ",i+1);

     scanf("%d",&bt[i]);

}

//calculate completion time of processes

for(int j=0;j<n;j++)

{

    sum+=bt[j];

    ct[j]+=sum;

}

//calculate turnaround time and waiting times

for(int k=0;k<n;k++)

{

    tat[k]=ct[k]-at[k];

    totalTAT+=tat[k];

}

for(k=0;k<n;k++)

{

     wt[k]=tat[k]-bt[k];

     totalWT+=wt[k];

}

printf("P#\t AT\t BT\t CT\t TAT\t WT\t\n\n");

for(i=0;i<n;i++)

{

     printf("P%d\t %d\t %d\t %d\t %d\t %d\n",i+1,at[i],bt[i],ct[i],tat[i],wt[i]);

}


printf("\nAverage Turnaround Time = %f\n",totalTAT/n);

printf("Average WT = %f\n\n",totalWT/n);

getch();

}