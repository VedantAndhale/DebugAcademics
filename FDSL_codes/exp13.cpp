#include<iostream>
#include<malloc.h>
using namespace std;
class test
{
public:
int SIZE,MyQueue[3],front =-1,rear=-1,element;
test()
{
SIZE=3;
}
void enQueue()
{
if((front==0&&rear==SIZE-1)||(front==rear+1))
cout<<"\nPizza Booking is full!!\n";
else
{
cout<<"\nEnter Pizza Quantity: ";
cin>>element;
if(rear==SIZE-1&&front!=0)
rear=-1;
MyQueue[++rear]=element;
if(front==-1)
front=0;
}
}
void deQueue()
{
if(front==-1&&rear==-1)
cout<<"\nPizza can't be served due to unavailablity!!!\n";
else
{
cout<<"\nPizza served:"<<MyQueue[front++];
if(front==SIZE)
front=0;
if(front-1==rear)
front=rear=-1;
}
}
void display()
{
if(front==-1)
cout<<"\n out of pizza!!!\n";
else{
int i=front;
cout<<"\nPizza ordered are :\n";
if(front<=rear){
while (i<=rear)
cout<<"\t"<<MyQueue[i++];
}
else{
while(i<=rear)
cout<<"\t"<<MyQueue[i++];
}
}
}
};


int main()
{
int choice;
test obj;
while(1){
cout<<"\n******Welcome to Pizza Hut******\n";
cout<<"1.Place Your Order\n2. Served Order\n3. Display Remaining Orders\n4. Exit\n";
cout<<"Enter your choice:";
cin>>choice;
switch(choice){
case 1:
	obj.enQueue();
	break;
case 2:obj.deQueue();
break;
case 3:obj.display();
break;
case 4:exit(0);
default:cout<<"\ninvalid choice!!!\n";
}
}
}


	
