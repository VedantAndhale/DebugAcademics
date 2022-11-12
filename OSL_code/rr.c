#include<stdio.h>
int main()
{
int st[10], bt[10], wt[10], tat[10], n, tq;
int i, count=0, swt=0, stat=0, temp, sq=0;
float awt=0.0, atat=0.0;
printf("enter number of processes : ");
scanf("%d", &n);
printf("\nenter burst time for processes ");
for(i=0; i<n;i++)
{
printf("\nFor process p%d : ",i+1); 
scanf("%d", &bt[i]);
st[i]=bt[i];
}
printf("\nenter time quantum : ");
scanf("%d", &tq);
while(1)
{
for(i=0, count=0;i<n;i++)
{
temp=tq;
if(st[i]==0)
{
count++;
continue;
}
if(st[i]>tq)
{
st[i]=st[i]-tq;
}
else
if (st[i]>=0)
{
temp=st[i];
st[i]=0;
}
sq=sq+temp;
tat[i]=sq;
}
if(n==count)
break;
}
for(i=0;i<n;i++)
{
wt[i]=tat[i]-bt[i];
swt=swt+wt[i];
stat=stat+tat[i];
}
awt=(float)swt/n;
atat=(float)stat/n;
printf(" \n process_no\t burst_time\t wait_time\t turn_around_time");
for(i=0; i<n; i++)
{
printf("\n%d\t\t %d\t\t %d\t\t %d", i+1, bt[i], wt[i], tat[i]);
}
printf("\naverage wait time is %f\naverage turn_around_time is %f\n", awt, atat);
return 0;
}









