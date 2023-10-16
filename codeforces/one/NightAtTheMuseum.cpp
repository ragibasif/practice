#include<bits/stdc++.h>

using namespace std;

int main() { 
    string s;
    cin >> s;
    int h = 0;
    int sol = 0;

    for (int i = 0; i < s.length(); i++) {
        int a = h - (s[i] - 'a');
        int b = (s[i] - 'a') - h;
        h = s[i] - 'a';
        if (a < 0)
            a += 26;
        if (b < 0)
            b += 26;
        sol += min(a,b);
    }

    cout << sol << endl;

    return 0;
}
