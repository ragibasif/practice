#include<bits/stdc++.h>
using namespace std;

int main() {
    int A = 0;
    int D = 0;
    int n = 0;
    string s;
    cin >> n;
    cin >> s;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'A')
            A++;
        else
            D++;
    }

    if (A > D)
        cout << "Anton" << endl;
    else if (D > A)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;
    return 0;
}
