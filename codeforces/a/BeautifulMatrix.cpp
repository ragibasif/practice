#include<bits/stdc++.h>

using namespace std;

int main() { 
    int t;
    int s = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> t;
            if (t == 1)
                s = abs(2 - i) + abs(2 - j);
        }
    }
    cout << s << endl;
    return 0;
}
