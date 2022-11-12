#include<stdio.h>
int main()
{

int n,j,temp,temp1,temp2,pr[10],b[10],t[10],w[10],p[10],i;

float att=0,awt=0;

for(i=0;i<10;i++)
            {
                        b[i]=0;w[i]=0;
            }

printf("enter the number of process: ");
scanf("%d",&n);
printf("enter the burst time : ");

for(i=0;i<n;i++)
            {
                        scanf("%d",&b[i]);
                        p[i]=i;
            }
for(i=0;i<n;i++)
            {
                        for(j=i;j<n;j++)
                        {
                                    if(b[i]>b[j])
                                    {
                                                temp=b[i];
                                                temp1=p[i];
                                                b[i]=b[j];
                                                p[i]=p[j];
                                                b[j]=temp;
                                                p[j]=temp1;
                                                }
}
}
w[0]=0;
for(i=0;i<n;i++)
w[i+1]=w[i]+b[i];
for(i=0;i<n;i++)
        {
t[i]=w[i]+b[i];
            awt=awt+w[i];
            att=att+t[i];
        }
awt=awt/n;
att=att/n;
printf("\n\t process \twaiting time \tturn around time \n");
for(i=0;i<n;i++)
printf("\t p[%d] \t\t  %d \t\t %d \n",p[i],w[i],t[i]);
printf("the average waitingtimeis %f\n",awt);
printf("the average turn around time is %f\n",att);
return 1;
}

