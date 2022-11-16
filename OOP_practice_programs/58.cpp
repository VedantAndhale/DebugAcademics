/*58.C++ program to check triangle by entering 3 angles  .
Created By Vedant Andhale (@VedantAndhale)*/

#include<iostream>
using namespace std;

int main()
{
	int angle1,angle2,angle3;
	cout<<"Enter the three angles of triangle:";
	cin>>angle1>>angle2>>angle3;

	if (angle1+angle2+angle3==180)
		cout<<"Triangle is valid";
	else
		cout<<"Triangle is not valid";

	
	return 0;
}
/*
output

Enter the three angles of triangle:60 50 50
Triangle is not valid

Enter the three angles of triangle:60 90 30
Triangle is valid
*/