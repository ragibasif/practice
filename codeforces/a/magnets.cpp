#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    int groups = 1;
    for (int j = 1; j < n; j++) {
        if (v[j] != v[j-1])
            groups++;
    }

    cout << groups << endl;
    return 0;
}
