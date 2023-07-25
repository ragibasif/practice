#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    char start = 'a';
    int sum = 0;

    for (int i = 0; i < s.length(); i++) {
        int t = s[i];
        int ia = t - start;
        int ib = start - t;
        if (ia < 0) ia += 26;
        if (ib < 0) ib += 26;
        int minimum = min(ia,ib);
        sum += minimum;
        start = s[i];
    }

    cout << sum << endl;
    return 0;
}
