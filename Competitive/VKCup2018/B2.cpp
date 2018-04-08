#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int n;
    int k;
    int wtf = 0;
    cin >> n >> k;
    string f;
    vector<string> s;
    int t = k;
    for (int i = 0; i < n; i++) {
        cin >> f;
        s.push_back(f);
        if (t != 0) {
            if (s[i][0] == '.' && s[i][1] != 'S' && t != 0) {
                s[i][0] = 'x';
                t--;
            }
            if (s[i][11] == '.' && s[i][10] != 'S' && t != 0) {
                s[i][11] = 'x';
                t--;
            }
            for (int j = 1; j < 11; j++) {
                if (t == 0) break;
                if (s[i][j] == '.') {
                    if (s[i][j - 1] != 'S' && s[i][j + 1] != 'S') {
                        s[i][j] = 'x';
                        t--;
                    }
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (t == 0) break;
        if (s[i][0] == '.' && s[i][1] == 'S' && t != 0) {
            s[i][0] = 'x';
            t--;
        }
        if (s[i][11] == '.' && s[i][10] == 'S' && t != 0) {
            s[i][11] = 'x';
            t--;
        }
        for (int j = 1; j < 11; j++) {
            if (t == 0) break;
            if (s[i][j] == '.') {
                if ((s[i][j - 1] != 'S' && s[i][j + 1] == 'S') || (s[i][j - 1] == 'S' && s[i][j + 1] != 'S')) {
                    s[i][j] = 'x';
                    t--;
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (t == 0) break;
        for (int j = 1; j < 11; j++) {
            if (t == 0) break;
            if (s[i][j] == '.') {
                if (s[i][j - 1] == 'S' && s[i][j + 1] == 'S') {
                    s[i][j] = 'x';
                    t--;
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (s[i][0] == 'S' && !(s[i][1] == '.' || s[i][1] == '-')) {
            wtf++;
        }
        if (s[i][11] == 'S' && !(s[i][10] == '.' || s[i][10] == '-')) {
            wtf++;
        }
        for (int j = 1; j < 11; j++) {
            if (!(s[i][j - 1] == '.' || s[i][j - 1] == '-') && s[i][j] == 'S') {
                wtf++;
            }
            if (s[i][j] == 'S' && !(s[i][j + 1] == '.' || s[i][j + 1] == '-')) {
                wtf++;
            }
        }
    }
    cout << wtf << endl;
    for (int i = 0; i < s.size(); i++) {
        cout << s[i] << endl;
    }
    return 0;
}
