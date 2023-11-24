#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, n, o, p, b;
    cin >> n >> m;

    int base[n][4];
    memset(base, 0, sizeof(base));

    for(int i = 0;i < n;i++) {
        base[i][0]=i;
    }

    for(int i = 0; i < m; i++) {
        cin >> o >> p >> b;
        o--;
        p--;
        b--;

        base[o][1]++;
        base[p][2]++;
        base[b][3]++;
    }

    pair<int, int> ou (0, 0);
    for(int i = 0; i < n; i++) {
        
    }
}
