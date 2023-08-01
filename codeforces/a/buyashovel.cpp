#include<bits/stdc++.h>
using namespace std;

int buyAmount(int &k, int &r, int &n, int &c);

int main() {
    int k,r;
    int c,n;
    cin >> k >> r;
    c = 1;
    n = k;
    buyAmount(k,r,n,c);

    cout << c << endl;
    return 0;
}

int buyAmount(int &k, int &r, int &n, int &c) {
    if (n % 10 == 0) {
        return c;
    }
    else if ((n % 10) - r == 0) {
        return c;
    }
    else {
        n = k * ++c;
        buyAmount(k,r,n,c);
    }
    return c;
}
