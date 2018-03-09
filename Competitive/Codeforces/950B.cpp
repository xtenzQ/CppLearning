#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> x(n);
    vector<int> y(m);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    for (int j = 0; j < m; j++) {
        cin >> y[j];
    }

    int sum = 0;
    int tempsum1 = x[0];
    int tempsum2 = y[0];
    int i = 0;
    int j = 0;
    while (i != n && j != m) {
        if (tempsum1 < tempsum2) {
            i++;
            tempsum1 += x[i];
        }
        else if (tempsum1 > tempsum2) {
            j++;
            tempsum2 += y[j];
        }
        else {
            sum++;
            i++;
            j++;
            if (i != n || j != m) {
                tempsum1 = x[i];
                tempsum2 = y[j];
            }

        }
    }
    cout << sum;
    return 0;
}
