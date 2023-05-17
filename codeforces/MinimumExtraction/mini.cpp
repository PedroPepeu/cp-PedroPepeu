#include <iostream>
#include <climits>

using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--) {
        int n, posFewer;
        cin >> n;

        int a[n], b[n-1];
        int fewer = INT_MAX;

        if(n == 1) {
            int x;
            cin >> x;
            cout << x << endl;
        } else {

            for(int i = 0; i < n; i++) {
                cin >> a[i];
                if(a[i] < fewer) {
                    fewer = a[i];
                    posFewer = i;    
                }
            }

            int bigger = INT_MIN;

            for(int i = 0; i < n; i++) {
                if(i == posFewer) continue;
                b[i] = a[i] - fewer;
                if(a[i] > bigger) bigger = a[i];
            }

            cout << bigger << endl;
            
        }
    }
}
