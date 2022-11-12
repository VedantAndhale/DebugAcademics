#include<stdio.h>
 
int main()
{
    int i, j, n, process[10], total=0, wtime[10], ptime[10], temp, ptemp;
    float avg=0;
    printf("\nEnter number of Processes:");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter Process %d ID:",i+1);
        scanf("%d", &process[i]);
        printf("\nEnter Process %d Time:",i+1);
        scanf("%d",&ptime[i]);
    }
 
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(ptime[i]>ptime[j])
            {
                temp = ptime[i];
                ptime[i] = ptime[j];
                ptime[j] = temp;
                ptemp = process[i];
                process[i] = process[j];
                process[j] = ptemp;
            }
        }
    }
        wtime[0]=0;
    for(i=1;i<n;i++)
    {
        wtime[i]=wtime[i-1]+ptime[i-1];
        total=total+wtime[i];
    }
    avg=(float)total/n;
    printf("\nP_ID\t P_TIME\t W_TIME\n");
    for(i=0;i<n;i++)
        printf("%d\t %d\t %d\n",process[i],ptime[i],wtime[i]);
    printf("\nTotal Waiting Time: %d \nAverage Waiting Time: %f", total, avg);
 return 0;
}
