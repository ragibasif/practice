#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 0;
    int sum = 0;
    int sol = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a,b,c;
        cin >> a >> b >> c;
        sum = a + b + c;
        if (sum >= 2)
            sol++;
        sum = 0;
    }

    cout << sol << endl;

    return 0;
}
