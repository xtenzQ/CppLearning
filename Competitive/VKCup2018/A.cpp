#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string inputLogin;
    cin >> inputLogin;
    transform(inputLogin.begin(), inputLogin.end(), inputLogin.begin(), ::tolower);
    replace(inputLogin.begin(), inputLogin.end(), 'o', '0');
    replace(inputLogin.begin(), inputLogin.end(), 'l', '1');
    replace(inputLogin.begin(), inputLogin.end(), 'i', '1');

    int n;
    cin >> n;
    bool login = true;

    int k = 0;
    string existingLogin;
    for (int i = 0; i < n; i++) {
        cin >> existingLogin;
        transform(existingLogin.begin(), existingLogin.end(), existingLogin.begin(), ::tolower);
        replace(existingLogin.begin(), existingLogin.end(), 'o', '0');
        replace(existingLogin.begin(), existingLogin.end(), 'l', '1');
        replace(existingLogin.begin(), existingLogin.end(), 'i', '1');
         if (inputLogin.compare(existingLogin) == 0) {
            login = false;
         }
    }

    if (login) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}
