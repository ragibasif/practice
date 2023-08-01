#include<bits/stdc++.h>
using namespace std;

bool whole(double x);

int main() {
    int a,b;
    cin >> a >> b;
    int m = max(a,b);
    double s = 6;
    double formula = (6 - m) + 1;

    double d = formula;


    while (!whole(formula/d) || !whole(s/d) && d >= 0) {
        d--;
    }


    if (whole(formula/d) && whole(s/d)) {
        formula /= d;
        s /= d;
    }



    cout << formula << '/' << s << endl;

    return 0;
}

bool whole(double x) {
    if (floor(x) == x)
        return 1;
    return 0;
}
