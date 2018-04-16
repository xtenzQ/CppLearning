# Codeforces Rounds

## Problemset
- [Educational Codeforces Round 39](#educational-codeforces-round-39)
    - [946A](#946a)
    - [946C](#946c)
- [Codeforces Round #469](#codeforces-round-469)
    - [950A](#950a)
    - [950B](#950b)
- [Codeforces Round #470](#codeforces-round-470)
    - [948A](#948a)
- [Educational Codeforces Round 41](#educational-codeforces-round-41)
    - [961A](#961a)

## Educational Codeforces Round 39

### 946A
[[Task](http://codeforces.com/problemset/problem/946/A)]

The answer for this problem can be calculated by a formula ![formula](https://imgur.com/erY5vfq.png) where ![formula](https://imgur.com/g4F8b1K.png) is the absolute value of ![formula](https://imgur.com/Nnvy1lZ.png). 
```Cpp
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int temp;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        sum += abs(temp);
    }

    cout << sum;

    return 0;
}
```

### 946C
[[Task](http://codeforces.com/problemset/problem/946/C)]

The solution is to find the string of 26 consecutive characters (the string will always start with the character 'a') considering a fact that the code of each i-th element will be less and equal to i + 1 element.

```Cpp
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    string res;
    int code = 97;
    int ch = 26;
    for (int i = 0; i < s.size(); i++) {
        if ((char)s[i] <= code && code < 123) {
            s[i] = (char)code;
            code++;
            ch--;
        }
    }
    if (s.size() < 26 || ch != 0) {
        res = "-1";
    }
    else {
        res = s;
    }
    cout << res;
    return 0;
}
```

## Codeforces Round 469
### 950A
[[Task](http://codeforces.com/problemset/problem/950/A)]

```Cpp
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
```
## 950B
[[Task](http://codeforces.com/problemset/problem/950/B)]

```Cpp
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
```

## Codeforces Round 470
### 948A
[[Task](http://codeforces.com/problemset/problem/948/A)] 
```Cpp
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
```

## Educational Codeforces Round 41
### 961A
[[Task](http://codeforces.com/problemset/problem/961/A)] | [[Code](https://github.com/xtenzQ/CppLearning/blob/master/Competitive/Codeforces/961A.cpp)]
