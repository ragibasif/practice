#include<bits/stdc++.h>

using namespace std;

int main() { 
    int l;
    int a = 0;
    int b = 0;
    char w;
    cin >> l;
    for (int i = 0; i < l; i++) {
        cin >> w;
        if (w == 'A')
            a++;
        else
            b++;
    }
    if (a > b) {
        cout << "Anton" << endl;
    }
    else if (b > a) {
        cout << "Danik" << endl;
    }
    else 
        cout << "Friendship" << endl;
    return 0;
}
