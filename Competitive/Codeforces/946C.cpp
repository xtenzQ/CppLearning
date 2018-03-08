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
