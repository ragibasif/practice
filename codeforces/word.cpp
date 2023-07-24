#include<bits/stdc++.h>
using namespace std;

void low(string &s);
void up(string &s);

int main() {

    string s;
    cin >> s;

    int tracker = 0;

    for (int i = 0; i < s.length(); i++) {
        if (isupper(s[i]))
            tracker++;
    }

    if (tracker <= (s.length() / 2))
        low(s);
    else
        up(s);

    cout << s << endl;

    return 0;
}

void low(string &s) {
    for (int i = 0; i < s.length(); i++) {
        s[i] = char(tolower(s[i]));
    }
}
void up(string &s){
    for (int i = 0; i < s.length(); i++) {
        s[i] = char(toupper(s[i]));
    }
}
