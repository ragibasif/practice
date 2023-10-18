#include<bits/stdc++.h>

using namespace std;

int main() { 
    int n, s = 0;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int a,b;
        cin >> a >> b;
        v.push_back(a);
        v.push_back(b);
    }
    for (int i = 0; i < n*2; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n * 2; j++) {
                if (j % 2 != 0) {
                    if (v[i] == v[j])
                        s++;
                }
            } 
        }
    }

    cout << s << endl;
    return 0;
}
