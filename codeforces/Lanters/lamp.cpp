#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, l;
    cin >> n >> l;

    vector<int> v;

    while(n--) {
        int a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

}
