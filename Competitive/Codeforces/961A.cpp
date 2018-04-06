#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int temp;
    vector<int> sq(n, 0);
    for (int i = 0; i < m; i++) {
        cin >> temp;
        sq[temp - 1]++;
    }
    vector<int>::iterator it = std::min_element(sq.begin(), sq.end());
    cout << *it;
    return 0;
}
