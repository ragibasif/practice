#include<bits/stdc++.h>
using namespace std;

int main() {
    int c = 4;
    vector<int> v;

    int sum = 0;

    for (int i = 0; i < c; i++) {
        int t;
        cin >> t;
        if (find(v.begin(),v.end(), t) != v.end()) {
            sum++;
        }
        else {
            v.push_back(t);
        }
        
    }
    cout << sum << endl;
    return 0;
}
