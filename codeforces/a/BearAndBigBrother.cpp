#include<bits/stdc++.h>

using namespace std;

int main() { 
    int a,b, y = 0;
    cin >> a >> b;

    while (a <= b) {
        y++;
        a = 3*a;
        b = 2*b;
    }
    cout << y << endl;
    return 0;
}
