#include<bits/stdc++.h>

using namespace std;

int main() { 
    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        v.push_back(t);
    }

    bool tracker = 1;
    int l = 0;
    int r = n - 1;

    vector<int> s;
    while (tracker) {
        if (l == r) {
            s.push_back(v[l]);
            tracker = 0;
        }
        else if (v[l] > v[r]) {
            s.push_back(v[l++]);
        }
        else
            s.push_back(v[r--]);
    }
    
    int sereja = 0;
    int dima = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            sereja += s[i];
        else
            dima += s[i];
    }

    cout << sereja << " " << dima << endl;

    return 0;
}
