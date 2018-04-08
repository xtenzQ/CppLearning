# Problemset

- [946A](#946a)
- [946C](#946c)
- [950A](#950a)
- [950B](#950b)
- [948A](#948a)
- [961A](#961a)

## 946A
[[Description](http://codeforces.com/problemset/problem/946/A)](https://github.com/xtenzQ/CppLearning/blob/master/Competitive/Codeforces/946A.cpp)]

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

## 946C
[[Description](http://codeforces.com/problemset/problem/946/C)](https://github.com/xtenzQ/CppLearning/blob/master/Competitive/Codeforces/946C.cpp)]

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

## 950A
[[Description](http://codeforces.com/problemset/problem/950/A)] | [[Code](https://github.com/xtenzQ/CppLearning/blob/master/Competitive/Codeforces/950A.cpp)]
## 950B
[[Description](http://codeforces.com/problemset/problem/950/B)] | [[Code](https://github.com/xtenzQ/CppLearning/blob/master/Competitive/Codeforces/950C.cpp)]
## 948A
[[Description](http://codeforces.com/problemset/problem/948/A)] | [[Code](https://github.com/xtenzQ/CppLearning/blob/master/Competitive/Codeforces/948A.cpp)]
## 961A
[[Description](http://codeforces.com/problemset/problem/961/A)] | [[Code](https://github.com/xtenzQ/CppLearning/blob/master/Competitive/Codeforces/961A.cpp)]
