#include <iostream>

using namespace std;

int main() {
    int n, t, b = 0;
    cin >> n >> t;

    while(n-- && t > 0) {
        int x;
        cin >> x;
        if(x > t) continue;
        t -= x;
        b++;
    }    

    cout << b << endl;

    return 0;
}
