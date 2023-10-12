#include<bits/stdc++.h>

using namespace std;

int main() { 
    int n;
    cin >> n;

    int f = 0;

    for (int i = 0; i < n; i++) {
        int a,b,c;
        cin >> a >> b >> c;
        int t = a + b + c;
        if (t >= 2)
            f++;
    }

    cout << f << endl;
    return 0;
}
