#include<bits/stdc++.h>

using namespace std;

int main() { 
    int sol = 0;
    int a = 0;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        if (temp != a)
            sol++;
        a = temp;
    }

    cout << sol << endl;

    return 0;
}
