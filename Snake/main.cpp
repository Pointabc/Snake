#include <iostream>
#include "Point.h"

int main()
{	
	Point p1(1, 3, '*');
	Point p2(10, 23, '#');
	Point p3;
	p1.Draw();
	p2.Draw();

	std::cout << std::endl;

	// Wait for exit
	system("pause");
	return 0;
}

