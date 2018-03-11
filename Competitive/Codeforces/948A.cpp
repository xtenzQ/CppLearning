#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    string res = "Yes";
    vector<string> v;
    string f;
    for (int i = 0; i < r; i++) {
        cin >> f;
        v.push_back(f);
    }

    for (int i = 0; i < r; i++) {
        if (res == "No") {
            break;
        }
        for (int j = 0; j < c; j++) {
            if (j != c - 1) {
                if (v[i][j] == '.' && v[i][j + 1] == 'S') {
                    v[i][j] = 'D';
                }
                if (v[i][j] == 'S' && v[i][j + 1] == '.') {
                    v[i][j + 1] = 'D';
                }
                if (v[i][j] == 'W' && v[i][j + 1] == 'S') {
                    res = "No";
                    break;
                }
                if (v[i][j] == 'S' && v[i][j + 1] == 'W') {
                    res = "No";
                    break;
                }
            }

            if (i != r - 1) {
                if (v[i][j] == 'S' && v[i + 1][j] == '.') {
                    v[i + 1][j] = 'D';
                }
                if (v[i][j] == 'S' && v[i + 1][j] == 'W') {
                    res = "No";
                    break;
                }
            }

            if (i != 0) {
                if (v[i][j] == 'S' && v[i - 1][j] == '.') {
                    v[i - 1][j] = 'D';
                }
                if (v[i][j] == 'S' && v[i - 1][j] == 'W') {
                    res = "No";
                    break;
                }
            }

        }
    }
    if (res != "No") {
        cout << res << endl;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cout << v[i][j];
            }
            if (i != r - 1) { cout << endl; }
        }
    }
    else {
        cout << res;
    }
    return 0;
}
