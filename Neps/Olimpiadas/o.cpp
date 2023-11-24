#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, n, o, p, b;
    cin >> n >> m;

    vector<pair<pair<int,int>, pair<int, int>>> base (n, make_pair(make_pair(0, 0), make_pair(0, 0)));

    for(int i =0; i<n; i++) {
        base[i].first.first = i;
    }

    for(int i = 0; i < m; i++) {
        cin >> o >> p >> b;
        o--;
        p--;
        b--;

        base[o].first.second++;
        base[p].second.first++;
        base[b].second.second++;
    }

    sort(base.begin(), base.end(), [](pair<pair<int,int>, pair<int,int>> &left, pair<pair<int,int>, pair<int,int>> &right) {
            if(left.first.second == right.first.second) {
            
            if(left.second.first == right.second.first) {
            
            return left.second.second > right.second.second;
            
            } else {

            return left.second.first > right.second.first;

            }

            }
            
            return left.first.second > right.first.second;

            });
    
    for(int i = 0; i < base.size(); i++) {
        if(i + 1 == base.size()) cout << base[i].first.first+1 << endl;
        else {
            cout << base[i].first.first+1 << " ";
        }
    }

    return 0;
}
