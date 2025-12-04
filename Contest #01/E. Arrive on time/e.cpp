#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, m;

    cin >> h >> m;

    if (m >= 33 && h > 0) cout << h << " " << m-33;
    else if(m >= 33 && h == 0) cout << 23 << " " << m-33;
    else if(m < 33 && h == 0) cout << 23 << " " << (m+60)-33;
    else cout << h-1 << " " << (m+60)-33;
    
    
    return 0;
}
