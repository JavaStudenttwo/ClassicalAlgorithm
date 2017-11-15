#include <iostream>
using namespace std;
bool check_1(int a[], int n)
{
	for (int i = 2; i <= n; i++)
	{
		for (int j = 1; j <= i - 1; j++)
		{
			if ((a[i] == a[j]) || (abs(a[i] - a[j]) == i - j))
			{
				return false;
			}
		}
	}
	return true;//²»³åÍ»
}

void queens_1()
{
	int a[5];
	int count = 0;
	for (a[1] = 1; a[1] <= 4; a[1]++)
	{
		for (a[2] = 1; a[2] <= 4; a[2]++)
		{
			for (a[3] = 1; a[3] <= 4; a[3]++)
			{
				for (a[4] = 1; a[4] <= 4; a[4]++)
				{
					if (!check_1(a, 4))
						continue;
					else
					{
						for (int i = 1; i <= 4; i++)
						{
							cout << a[i];
						}
						cout << endl;
						count++;
					}
				}
			}

		}
	}
	cout << count << endl;
}

void main_1()
{
	queens_1();


	cin.get();
}