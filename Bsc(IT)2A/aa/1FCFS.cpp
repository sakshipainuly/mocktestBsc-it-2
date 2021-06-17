#include<stdio.h>
int main(){
int n,c;
printf("Enter The Number of Process: ");
scanf("%d",&n);
int bt[n],at[n],tat[n],wt[n],temp;
printf("\nEnter The Burst Time and Arrival Time\n");
for(int i=0;i<n;i++){
printf("Burst Time P%d: ",i+1);
scanf("%d",&bt[i]);
printf("Arrival Time P%d: ",i+1);
scanf("%d",&at[i]);
}
temp=(at[0]!=0)?at[0]:0;
float avgTat=0,avgWt=0;
 printf("Process\tBT\tAT\tTAT \t WT\n");
 for(int i=0;i<n;i++){
  wt[i]=0;
  tat[i]=0;
  wt[i]=temp-at[i];
  temp=temp+bt[i];
  tat[i]=wt[i]+bt[i];
  printf("P%d\t%d\t%d\t%d\t%d\n",i+1,bt[i],at[i],tat[i],wt[i]);  
  avgTat+=tat[i];
  avgWt+=wt[i];
 }
 avgWt/=4;
 avgTat/=4;

return 0;
}

