#include<iostream>
#include<malloc.h>
using namespace std;
typedef struct PRQ
{
public:
 int element;
 int priority;
}PriorityQ;

void InsertPQ(int elem, int pre);
PriorityQ DeletePRQ;
int Qfull();
int Qempty();
void display();

int SIZE=5;
int front,rear=-1;
PriorityQ PQ[5];
void InsertPQ(int elem,int pre)
{
	int i;
	if(Qfull())
	cout<<"\n\nQueue is Overflow\n";
	else
	{
		i=rear;
		++rear;
		while(PQ[i].priority>=pre && i>=0)
		{
			PQ[i+1]=PQ[i];
			i--;
		}
		PQ[i+1].element=elem;
		PQ[i+1].priority=pre;
	}
}
PriorityQ DeletePQ()
{
	PriorityQ p;
	if(Qempty())
	{
		cout<<"\n\nQueue is Underflow\n\n";
		p.element=-1;
		p.priority=-1;
		return(p);
	}
	else
	{
		p=PQ[front];
		front=front+1;
		return(p);
	}	
}

int Qfull()
{
	if(rear==SIZE-1) return 1;
	return 0;
}

int Qempty()
{
	if(front > rear)
	return 1;
	else
	return 0;
}
void display()
{
	int i;
	if(Qempty()) cout<<"\nQueue is empty \n";
	else
	{
		cout<<"Front->";
		for(i=front;i<=rear;i++)
			cout<<PQ[i].element<<"<="<<PQ[i].priority<<" ";
		cout<<"<-Rear";
	}
}
int main()
{
	int opn;
	PriorityQ p;
	do
	{
		cout<<"\nOperations on Priority Queue\n\n";
		cout<<"1.Insert\n2. Delete\n3. Display\n4. Exit\n";
		cout<<"Select your choice:";
		cin>>opn;
		switch(opn)
		{
			case 1:cout<<"Enter the element and its Priority : ";
				cin>>p.element>>p.priority;
				InsertPQ(p.element,p.priority);
				break;
			case 2:p=DeletePQ();
				if(p.element!=-1)
				cout<<"\n\nElement Delete: "<<p.element;
				break;
			case 3:cout<<"\n\nElements of Queue: ";
				display();
				break;
			break;
			case 4:cout<<"\n\nExiting ....\n\n";
				break;
			default:cout<<"\nInvalid choice!!!\n";
				break;
		}
	}while(opn!=4);
	return 0;
}








	
