#include <iostream>
using namespace std;

int main()
{
	const float length = 5.5;
	const float width = 2.7;
	float area;
	float perimeter;


	perimeter = 2 * (length + width);
	area = length * width;

	cout << "The perimeter is " << perimeter << "\n";
	cout << "The area is " << area << endl;
	system("pause");

	return 0;
}