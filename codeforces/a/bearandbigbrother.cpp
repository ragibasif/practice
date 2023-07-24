#include<bits/stdc++.h>
using namespace std;

int main() {
    int a = 0;
    int b = 0;
    int y = 0;
    cin >> a >> b;
    while (a <= b) {
        a = 3 * a;
        b = 2 * b;
        y++;
    }

    cout << y << endl;
    return 0;
}
