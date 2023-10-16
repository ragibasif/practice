#include<bits/stdc++.h>

using namespace std;

int main() { 
    int n, a = 0, m = 0;
    cin >> n;

    while (n) {

        n--;
        int t;
        cin >> t;
        a += t;
        if (a < 0) {
            m++;
            a = 0;
        }
    }

    cout << m << endl;
    return 0;
}
