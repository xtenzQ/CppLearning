#include <iostream>

using namespace std;

pair<long,long> req(long a,long b);

int main()
{
    pair<long,long> pa;
    long o, p;
    cin >> o >> p;
    pa = req(o, p);
    cout << pa.first << " " << pa.second;
    return 0;
}

pair<long, long> req(long a, long b) {
    if (a == 0 || b == 0) {
        return make_pair(a, b);
    }
    else if (a >= 2 * b) {
        a = a - 2 * b;
        req(a, b);
    }
    else if (b >= 2 * a) {
        b = b - 2 * a;
        req(a, b);
    }
    else {
        return make_pair(a, b);
    }
}
