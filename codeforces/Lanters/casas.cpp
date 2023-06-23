#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, l;
    cin >> n >> l;

    vector<int> v;

    int cl, pl;

    while(n--) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    sort(v.begin(), v.end());

    double minDist = v[0];

    for(int i = 1, j = 2; j < v.size(); i++, j++) {
        if((v[j] - v[i])/2 > minDist) {
            minDist = (v[j] - v[i]);
            minDist /= 2;
        }
    }

    printf("%.10f\n", minDist);

    return 0;
}
