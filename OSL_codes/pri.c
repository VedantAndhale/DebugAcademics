#include<stdio.h>
int main()
{
int p[30],pr[30],key,loc,bt[30],temp,max,wt[30],ta[30],sum=0,i,j,n;
wt[0]=0;
printf("enter the number of processes=");
scanf("%d",&n);
printf("enter the burst time for each process");
for(i=0;i<n;i++)
{
p[i]=i+1;
printf("\np%d=",i+1);
scanf("%d",&bt[i]);
printf("\t priority of p%d=",i+1);
scanf("%d",&pr[i]);
}
 
for(i=0;i<n;i++)
{   max=i;
for(j=i+1;j<n;j++)
{
if(pr[j] <pr[max])
max=j;
}
temp=pr[max];
pr[max]=pr[i];
pr[i]=temp;
temp=bt[max];
bt[max]=bt[i];
bt[i]=temp;
temp=p[max];
p[max]=p[i];
p[i]=temp;
}
 
for(i=0;i<n;i++)
{       wt[i+1]=bt[i]+wt[i];
ta[i]=bt[i]+wt[i];
sum+=ta[i];
}
for(i=0;i<n;i++)
{
printf("\n waiting time for p[%d]=%d",p[i],wt[i]);
printf("\t turn around time for p[%d]=%d",p[i],ta[i]);
}
printf("\n\n average turn around=%d",sum/n);
return 1;
}
