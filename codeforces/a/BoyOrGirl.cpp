#include<bits/stdc++.h>

using namespace std;

int main() { 
    string a;
    getline(cin, a);

    unordered_map<char, bool> u;
    int l = a.length();

    for (int i = 0; i < a.length(); i++) {
        if (u.find(a[i]) == u.end())
            u[a[i]] = 1;
        else
            l--;
    }
    if (l % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;


    return 0;
}
