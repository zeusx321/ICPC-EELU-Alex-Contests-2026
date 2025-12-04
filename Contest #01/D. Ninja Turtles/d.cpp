#include <bits/stdc++.h>
using namespace std;

int main() {
    int d1, s1, d2, s2;
    cin >> d1 >> s1;
    cin >> d2 >> s2;

    double t1 = d1 / s1;
    double t2 = d2 / s2;

    if (t1 < t2) cout << "captain maged";
    else if (t2 < t1) cout << "captain america";
    else cout << "fauel";

    return 0;
}
