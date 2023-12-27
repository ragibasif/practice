#include<bits/stdc++.h>

using namespace std;

int main() { 
    int n,b,d;
    cin >> n >> b >> d;

    int t;
    int total = 0;
    int counter = 0;
    while (n > 0) {
        n--;
        cin >> t;
        if (t <= b) {
            total += t;
        }
        if (total > d) {
            total = 0;
            counter++;
        }
    }

    cout << counter << endl;
    return 0;
}
