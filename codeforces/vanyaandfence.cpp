#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 0;
    int h = 0;
    int w = 0;
    cin >> n;
    cin >> h;
    for (int i = 0; i < n; i++) {
        int temp = 0;
        cin >> temp;
        if (temp <= h)
            w++;
        else if (temp > h)
            w+=2;
    }
    cout << w << endl;
    return 0;
}
