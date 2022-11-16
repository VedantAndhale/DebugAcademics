/*65.C++ program for Ca lculation of the surface and the volume of a cone  .
Created By Vedant Andhale (@VedantAndhale)*/

#include <iostream>
using namespace std;

float pi = 3.14159;

// Function to calculate
// Volume of cone
float volume(float r, float h)
{
	return (float(1) / float(3)) * pi * r * r * h;
}
// Function to calculate
// Surface area of cone
float surface_area(float r, float s)
{
	return pi * r * s + pi * r * r;
}

// Driver Code
int main()
{
	float radius = 5;
	float slant_height = 13;
	float height = 12;
	float vol, sur_area;

	// Printing value of volume
	// and surface area
	cout << "Volume Of Cone : " << volume(radius, height) << endl;
	cout << "Surface Area Of Cone : " << surface_area(radius, slant_height);
	return 0;
}
/*
Output
Volume Of Cone : 314.159
Surface Area Of Cone : 282.743

*/