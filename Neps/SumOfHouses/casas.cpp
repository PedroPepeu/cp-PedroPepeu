#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, a;
    cin >> n;
    if(n == 2) {
        int x, y;
        cin >> x >> y;
        cout << x << " " <<  y << endl;
    } else {
        vector<int> v;
        while(n--) {
            cin >> a;
            v.push_back(a);
        }

       cout << v[v.size() - 2] << " " << v[v.size() - 1] << endl; 

    }
}
