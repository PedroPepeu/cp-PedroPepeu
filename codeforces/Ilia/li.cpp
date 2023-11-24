#include <bits/stdc++.h>

using namespace std;

int dp[100000];

int main() {

    string s;
    cin >> s;

    int n, l, r;
    cin >> n;
    
    dp[0] = 0;
    int c = 0;
    for(int i = 1; i < s.size(); i++) {
        if(s[i] == s[i-1]) {
            c++;
        }
        dp[i] = c;
    }

    for(int i = 0; i < n; i++) {
        cin >> l >> r;        

        cout << dp[r-1] - dp[l-1] << endl;
    }
    return 0;
}
