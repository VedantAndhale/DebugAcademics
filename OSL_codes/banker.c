#include <stdio.h>
int null2D(int a[30][25], int, int);
int cmp(int a[], int b[], int);
void setzero(int a[], int);
void add(int a[], int b[], int);
int zeros(int a[], int);
int main()
{
int numberofResource, numberofProcess,i,j,c, tempc, count, flag;
int resourceArray[25], Total[25], avl[25], allocation[30][25], maxNeed[30][25],
avilable[30][25], remianingNeed[30][25], sequence[25];
char processLetter = 'A';
printf("Enter The number of Resorces:");
scanf("%d", &numberofResource);
for (i = 0; i < numberofResource; i++)
{
printf("Enter the Number Of Resource Availability %c :", processLetter + i);
scanf("%d", &resourceArray[i]);
}

printf("Enter The Number of Process:");
scanf("%d", &numberofProcess);
printf("\n\n\n");
for ( i = 0; i < numberofProcess; i++)
{
printf("\n\nEnter The Details of Process : %d\n\n", i + 1);
for ( j = 0; j < numberofResource; j++)

{
printf("\tEnter Resource Already Allocated for %c:", processLetter + j);
scanf("%d", &allocation[i][j]);
}
}
printf("\n\n\n");
for ( i = 0; i < numberofProcess; i++)
{
printf("\n\nEnter The Details of Process : %d\n\n", i + 1);
for (j = 0; j < numberofResource; j++)
{
printf("\tEnter Maximum Nedd of the Resource %c:", processLetter + j);
scanf("%d", &maxNeed[i][j]);
}
}
for (j = 0; j < numberofResource; j++)
{
Total[j] = 0;
}
for (i = 0; i < numberofProcess; i++)
{
for (j = 0; j < numberofResource; j++)
{
Total[j] += allocation[i][j];
}
}
for ( i = 0; i < numberofProcess; i++)
{

for ( j = 0; j < numberofResource; j++)

{

remianingNeed[i][j] = maxNeed[i][j] - allocation[i][j];
}
}
for (i = 0; i < numberofResource; i++)
{
avilable[0][i] = resourceArray[i] - Total[i];
avl[i] = resourceArray[i] - Total[i];
}
printf("\n\nTotal Avilable Resource\n");
for ( i = 0; i < numberofResource; i++)
printf("\nResource %c is : %d", processLetter + i, resourceArray[i]);
printf("\n\nNow Availabil\n");
for (i = 0; i < numberofResource; i++)
printf("Avalivable Resource For %c : %d\n", processLetter + i, avl[i]);

printf("\n\nAllocation\n");
for (i = 0; i < numberofProcess; i++)
{
printf("\n");
for (j = 0; j < numberofResource; j++)
{
printf("%d\t", allocation[i][j]);
}
}
printf("\n\nMax Need\n");
for (i = 0; i < numberofProcess; i++)
{
printf("\n");

for (j = 0; j < numberofResource; j++)
{
printf("%d\t", maxNeed[i][j]);
}
}
printf("\n\nRemaing Need\n");
for (i = 0; i < numberofProcess; i++)
{
printf("\n");
for (j = 0; j < numberofResource; j++)
{
printf("%d\t", remianingNeed[i][j]);
}
}

count = 0;

while (null2D(remianingNeed, numberofResource, numberofProcess))
{
for (i = 0; i < numberofProcess; i++)
{
if (cmp(avl, remianingNeed[i], numberofResource))
{
if (zeros(remianingNeed[i], numberofResource))
{
sequence[count] = i + 1;
count++;

setzero(remianingNeed[i], numberofResource);
add(avl, allocation[i], numberofResource);

setzero(allocation[i], numberofResource);
}
}
}
}

for (i = 0; i < numberofResource; i++)
printf("\nNow avalivable Resource For %c : %d\n", processLetter + i, avl[i]);

printf("\n=======================================\n");
if (null2D(remianingNeed, numberofResource, numberofProcess) == 0)
{
printf("No deadlock occurrence\n");
printf("\n=======================================\n");
printf("Safe Sequence Is");
printf("\n");
for (i = 0; i < count; i++)
{
printf("P%d\t", sequence[i]);
printf("\n=======================================\n");
}
}
return 0;
}

int null2D(int a[30][25], int x, int y)
{
int i,j;
int count = 0;
for ( i = 0; i < x; i++)
{
for ( j = 0; j < y; j++)
{
if (a[i][j] > 0)
count++;

}
}
if (count == 0)
return 0;
else
return 1;
}
int cmp(int a[], int b[], int x)
{

int result = 0, i = 0;
while (i < x)
{
if (a[i] >= b[i])
result++;
i++;
}
if (result == x)
return 1;
else
return 0;
}
void setzero(int a[], int y)
{
int i;
for ( i = 0; i < y; i++)
a[i] = 0;
}
void add(int a[], int b[], int x)
{

int i;
for ( i = 0; i < x; i++)
{
a[i] += b[i];
}
}
int zeros(int a[], int x)
{
int i;
int count = 0;
for ( i = 0; i < x; i++)
if (a[i] == 0)
count++;
if (count < x)
return 1;
else
return 0;
}
