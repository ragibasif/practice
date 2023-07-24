#include<bits/stdc++.h>
using namespace std;

void BubbleSort(vector<int> &v, int &n);

int main() {

    int n,t;
    vector<int> v;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> t;
        v.push_back(t);
    }

    BubbleSort(v, n);

    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    cout << endl;

    return 0;
}

void BubbleSort(vector<int> &v, int &n) {
    bool flag = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j+1]) {
                swap(v[j], v[j+1]);
                flag = 1;
            }
        }
        if (!flag)
            break;
    }
}
