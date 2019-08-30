#include <iostream>
using namespace std;

int main()
{
	const float length = 3;
	const float width = 5;
	float area;
	float perimeter;


	perimeter = 2 * (length + width);
	area = length * width;

	cout << "The perimeter is " << perimeter << "\n";
	cout << "The area is " << area << endl;
	system("pause");

	return 0;
}