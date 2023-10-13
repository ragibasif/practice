#include<bits/stdc++.h>

using namespace std;

int main() { 
    string a;
    cin >> a;
    string s;
    if (a[0] > 90) {
        s = a[0] - 32;
        for (int i = 1; i < a.length(); i++) {
            s += a[i];
        }
    }

    else
        s = a;

    cout << s << endl;
    return 0;
}
