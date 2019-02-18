#include <iostream>

using namespace std;
int main()
{
	int lengthOfSections, summSections;
	cout << "Enter summ sections:";
	cin >> summSections;

	do
	{
		cout << "Enter length of sections(only even digit):";
		cin >> lengthOfSections;
	} while (lengthOfSections % 2 == 0);

	int front = 0;

	for (int i = 1; i <= summSections; i++)
	{
		front++;
		if (front == 15)
			front = 1;

		for (int i = 0; i < lengthOfSections / 2 + 1; i++)
		{
			for (int j = 0; j < lengthOfSections; j++)
			{
				if (i == 0 || j == i || j == lengthOfSections - i - 1)
				{
					cout << "*";
				}
				else
					cout << " ";
			}
			cout << endl;
		}
	}
}