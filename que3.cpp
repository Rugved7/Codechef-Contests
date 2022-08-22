#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int candies, friends;
		cin >> candies >> friends;
		if ((candies % friends) == 0)
		{
			if ((candies / friends) % 2 == 0)
			{
				cout << "Yes" << endl;
			}
			else
				cout << "No" << endl;
		}
		else
			cout << "No" << endl;
	}
	return 0;
}