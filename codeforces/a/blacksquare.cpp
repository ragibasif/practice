#include<bits/stdc++.h>
using namespace std;

int main() {
    int a;
    vector<int> v;
    for (int i = 0; i < 4; i++) {
        cin >> a;
        v.push_back(a);
    }
    string s;
    cin >> s;

    int sum = 0;

    for (int j = 0; j < s.length(); j++) {
        int t = s[j] - '0';
        sum += v[t-1];
    }

    cout << sum << endl;

    return 0;
}
