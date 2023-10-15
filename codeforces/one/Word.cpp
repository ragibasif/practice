#include<bits/stdc++.h>

using namespace std;

string upper(string &s);
string lower(string &s);

int main() { 

    string a;
    cin >> a;

    int u = 0;
    int l = 0;

    for (int i = 0; i < a.length(); i++) {
        if (a[i] >= 97)
            l++;
        else
            u++;
    }


    if (l >= u)
        cout << lower(a) << endl;
    else 
        cout << upper(a) << endl;




    return 0;
}


string upper(string &s) {
    string temp;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 97)
            temp += s[i] - 32;
        else
            temp += s[i];
    }
    return temp;
}
string lower(string &s) {
    string temp;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] < 97)
            temp += s[i] + 32;
        else
            temp += s[i];
    }
    return temp;
}
