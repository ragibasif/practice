#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 0;
    int answer = 0;

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cin >> n;
            if (n == 1) {
                answer = abs(3 - i) + abs(3 - j);
            }
        }
    }
    cout << answer << endl;
    return 0;
}

// TODO: revisit this problem
