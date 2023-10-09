#include<bits/stdc++.h>

using namespace std;

int main() { 
    int n,h, m = 0;

    cin >> n >> h;

    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        if (t <= h)
            m++;
        else
            m += 2;
    }
    cout << m << endl;
    return 0; 
}
