#include<bits/stdc++.h>

using namespace std;

int main() { 
    int k,r,s = 0;
    cin >> k >> r;

    bool tracker = 1;

    int t = k;
    while (tracker) {
        if (t % 10 == 0 || (t%10) - r == 0) {
            //cout << "t%10: "  << t%10<< endl;
            //cout << "(t%10) - r: "<< (t%10) - r << endl;
            s++;
            //cout << "s: " << s << endl;
            tracker = 0;
        }
        else {
            t += k;
            s++;
        }
    }

    cout << s << endl;

    return 0;
}
