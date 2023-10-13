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

    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v.size() - 1; j++) {
            if (v[j] > v[j+1]) {
                int t = v[j];
                v[j] = v[j+1];
                v[j+1] = t;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    return 0;
}
