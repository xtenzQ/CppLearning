#include <iostream>
#include <vector>

using namespace std;

int *msg;
bool *used;
int f;
int k;
int n;
void dsf(int);

int main()
{
    cin >> n >> k;
    f = 0;
    msg = new int[n];
    used = new bool[n];
    for (int i = 0; i < n; i++) {
        cin >> msg[i];
        used[i] = false;
    }
    for (int i = 0; i < n; i++) {
        dsf(i);
        for (int j = 0; j < n; j++) {
            if (used[j]) {
                f++;
            }
            used[j] = false;
        }
        cout << f << " ";
        f = 0;
    }
    return 0;
}

void dsf(int i) {
    used[i] = true;
    for (int j = 1; j <= k; j++) {
        if (i + j <= n) {
            used[i + j] = true;
        }
        if (i - j >= 0) {
            used[i - j] = true;
        }
    }
    if (msg[i] != 0) {
        dsf(msg[i] - 1);
    }
}
