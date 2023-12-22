#include<bits/stdc++.h>

using namespace std;

int main() { 
    int a, b;
    cin >> a >> b;
    int m = max(a,b);
    int n = 6 - m + 1;
    int d = 6;

    int t = 6;
    while (t != 0) {
        if (n % t == 0 && d % t == 0) {
            n /= t;
            d /= t;
        }
        t--;
    }

    cout << n << '/' << d << endl;

    return 0;
}
