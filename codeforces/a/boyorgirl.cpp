#include<bits/stdc++.h>
using namespace std;

int main() {
    string in;
    cin >> in;
    int tracker = 0;

    for (int i = 0; i < in.length(); i++) {
        if (in.find(in[i]) == i)
            tracker++;
    }
    if (tracker % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
    cout << endl;
    return 0;
}
