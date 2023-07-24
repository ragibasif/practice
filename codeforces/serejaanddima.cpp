#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    int sereja = 0;
    int dima = 0;

    int l = 0;
    int r = n - 1;


    int max = 0;
    int turn = 0;
    while (l <= r) {
        if (v[l] >= v[r]) {
            max = v[l++];
        }
        else {
            max = v[r--];
        }
        if (turn % 2 == 0)
            sereja += max;
        else
            dima += max;
        turn++;
    }

    cout << sereja << " " << dima << endl;

    return 0;
}
