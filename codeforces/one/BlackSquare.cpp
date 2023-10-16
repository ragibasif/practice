#include<bits/stdc++.h>

using namespace std;

int main() { 
    vector<int> v;
    for (int i = 0; i < 4; i++) {
        int t;
        cin >> t;
        v.push_back(t);
    }
    string s;
    cin >> s;

    int m = 0;

    for (int j = 0; j < s.length(); j++) {
        m += v[s[j] - '0' - 1];
    }

    cout << m << endl;
    return 0;
}
