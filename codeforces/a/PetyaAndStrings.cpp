#include<bits/stdc++.h>

using namespace std;

int main() { 
    string a,b;
    getline(cin ,a);
    getline(cin ,b);
    bool ans = 0;
    for (int i = 0; i < a.length(); i++) {
        if (a[i] < 'a')
            a[i] += 32;
        if (b[i] < 'a')
            b[i] += 32;

        if (a[i] < b[i]) {
            cout << "-1" << endl;
            ans = 1;
            break;
        }
        else if (b[i] < a[i]) {
            cout << "1" << endl;
            ans = 1;
            break;
        }

    }
    if (!ans)
        cout << "0" << endl;


    return 0;
}
