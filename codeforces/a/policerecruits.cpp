#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++){
        int t;
        cin >> t;
        v.push_back(t);
    }

    int cops = 0;
    int crimes = 0;
    int totalc = 0;

    for (int j = 0; j < v.size(); j++) {
        if (v[j] > 0)
            cops += v[j];
        else if (v[j] < 0)
            crimes += abs(v[j]);
        if (crimes > cops) {
            totalc += abs(cops - crimes);
            crimes = 0;
            cops = 0;
        }
        else if (crimes < cops) {
            cops -= crimes;
            crimes = 0;
        }
        else if (crimes == cops){
            cops -= crimes;
            crimes = 0;
        }
    }
    cout << totalc << endl;
    return 0;
}
