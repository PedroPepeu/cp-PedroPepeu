#include <iostream>
#include <cstring>
#include <climits>

using namespace std;

int main() {
    int n;
    while(cin >> n && n != 0) {
        int c, m, biggestGrade = INT_MIN;
        int a[1010][2];
        memset(a, -1, sizeof(a));
        for(int i = 0; i < n; i++) {
            cin >> c >> m;
            a[i][0] = c;
            a[i][1] = m;
            if(biggestGrade < m) biggestGrade = m;
        }
        int i = 0;
        while(a[i][0] != -1) {
            if(a[i][1] == biggestGrade) {
                if(a[i + 1][0] == -1) cout << a[1][0] << endl;
                else cout << a[1][0] << " " << endl;
            }
            i++;
        }
    }
}
