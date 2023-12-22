#include<bits/stdc++.h>

using namespace std;

int main() { 
    string s,t;
    cin >> s >> t;

    int move = 1;

    for (int i = 0, j = 0; i < t.length(); i++) {
        if (s[j] == t[i]) {
            move++;
            j++;
        }
    }

    cout << move << endl;
    return 0;
}
