#include <iostream>

using namespace std;

int main() {
    
    int t;
    cin >> t;
    while(t--) {
        int m, n, num = 0;
        cin >> m >> n;
        int a[m][n];
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                cin >> a[m][n];
                if(a[m][n] == 1) num++;
            }
        }
        
        bool Notcorrupted = true;
        int zer = 0;
        
        for(int i = 0; i < m; i++) {
            if(a[i][0] != 1) {
                Notcorrupted = false;
                zer++;
            }
            if(a[i][n] != 1) {
                Notcorrupted = false;
                zer++;
            }
        }
        
        for(int j = 0; j < n; j++) {
            if(a[0][j] != 1) {
                Notcorrupted = false;
                zer++;
            }
            if(a[m][j] != 1) {
                Notcorrupted = false;
                zer++;
            }
        }

        if(Notcorrupted) {
            cout << 0 << endl;
            continue;
        } else {
            int onesN = (m * 2 + n * 2) - 4;
            if(onesN > num) {
                cout << -1 << endl;
                continue;
            } else {
                int extBlc = 0;
                for(int i = 1; i < n - 1; i++) {
                    for(int j = 1; j < n - 1; j++) {
                        if(a[i][j] == 1) extBlc++;
                    }
                }
                if(extBlc < zer) {
                    cout << -1 << endl;
                    continue;
                } else {
                    cout << zer << endl;
                }
            }
        }
    }
}
