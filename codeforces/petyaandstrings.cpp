#include<bits/stdc++.h>
using namespace std;

int main() {
    string i1;
    string i2;

    cin >> i1 >> i2;

    int s1 = 0;
    int s2 = 0;

    for (int i = 0; i < i1.length(); i++) {
        i1[i] = tolower(i1[i]);
        i2[i] = tolower(i2[i]);
    }

    if (i1 == i2)
        cout << 0;
    else if (i1 > i2)
        cout << 1;
    else
        cout << -1;

    cout << endl;

    return 0;
}

