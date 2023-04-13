
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int area, length, breadth, radius, triangle, Circle, height, pie = 3.142;
	string typearea;
	cout << "PLEASE TYPE IN THE TYPE OF AREA YOU WANT TO FIND (CIRCLE OR TRIANGLE)" << endl;

	cout << "which area do you want to find?";
	getline(cin, typearea); 

	if (typearea == "triangle")
	{
		cout << "enter height" << endl;
		cin >> height;
		cout << "enter breadth" << endl;
		cin >> breadth;

		area = 0.5 * breadth * height;
		cout << "area is" << area;
	}
	else if (typearea == "circle")
	{
		cout << "enter radius" << endl;
		cin >> radius;

		area = pie * pow(radius, 2);
		cout << "area is " << area;
	}
}