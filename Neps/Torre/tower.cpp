#include <iostream>
#include <climits>

using namespace std;

int main() {
    int m;

    cin >> m;

    int a[m][m];

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        } 
    }

    int maxSum = INT_MIN;
    int currentSum = 0;

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < m; j++) {
            for(int l = 0; l < m; l++) {
                if(i == l) continue;
                currentSum += a[l][j];
            }
            for(int c = 0; c < m; c++) {
                if(j == c) continue;
                currentSum += a[i][c];
            }
            if(currentSum > maxSum) maxSum = currentSum;
            currentSum = 0;
        }
    }

    cout << maxSum << endl;
}
