#include<iostream>

using namespace std;

int main()
{
	//7.(Area and perimeter of a rectangle) Write a program that displays the area and perimeter of a rectangle with a width of 5.3 and height of 8.6 
	//using the following formula : area = width * height perimeter = 2 * (width + height)

	float length = 8.6, width = 5.3;

	cout << "Area: " << length * width << endl;

	cout << "Perimeter" << 2 * (length + width) << endl;

	return 0;
}