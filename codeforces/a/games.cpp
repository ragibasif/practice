#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int a,b;

    vector<int> home;
    vector<int> away;


    int sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> a;
        cin >> b;
        home.push_back(a);
        away.push_back(b);

    }

    for (int j = 0; j < n; j++) {
        for (int k = 0; k < n; k++) {
            if (home[j] == away[k])
                sum++;
        }
    }


    cout << sum << endl;




    return 0;
}
