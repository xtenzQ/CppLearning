#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
	int a[10];
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
	}
	int n;
	int b[10];
	cin >> n;
	bool* c = new bool[n];
	int k = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 6; j++) {
			cin >> b[j];
			if (find(begin(a), end(a), b[j]) != end(a)) {
				k++;
			}
		}
		if (k >= 3) {
			c[i] = true;

		}
		else {
			c[i] = false;
		}
		k = 0;
	}
	for (int i = 0; i < n; i++)
	{
		if (c[i] == true)
		{
			cout << "Lucky" << endl;
		}
		else
		{
			cout << "Unlucky" << endl;
		}
		
	}
	return 0;
}