#include<bits/stdc++.h>
using namespace std;

int main() {
    string s,t;
    cin >> s >> t;
    int sum = 1;

    for (int i = 0, j = 0; j < t.length(); j++) {
        if (s[i] == t[j]) {
            i++;
            sum++;
        }
    }


    cout << sum << endl;
    return 0;
}
