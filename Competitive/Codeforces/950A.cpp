#include <iostream>

using namespace std;

int main()
{
    int l, r, a;
    int mn,mx;
    int del;
    int temp;
    cin >> l >> r >> a;
    mn = min(l ,r);
    mx = max(l, r);
    temp = mn;
    while (a > 0) {
        mn = min(mn, mx);
        mx = max(temp, mx);
        del = a / 2;
        if (a == 1) {
            del = 1;
        }
        mn += del;
        temp = mn;
        a = a - del;
    }
    mn = min(mn, mx);
    cout << mn * 2;
    return 0;
}
