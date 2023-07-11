#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    while(cin >> n && n != 0) {
        vector<int> v;

        if(n == 2) {
            int n1, n2;
            cin >> n1 >> n2;
            cout << 2 << endl;
        } else {

            int count = 0;

            while(n--) {
                int temp;
                cin >> temp;
                v.push_back(temp);
            }

            bool down;
            if(v[0] < v[1]) down = false;
            else down = true;

            for(int i = 1; i < v.size(); i++) {
                if(down && (v[i-1] < v[i])) {
                    count++;
                    down = false;
                } else if(!down && (v[i-1] > v[i])) {
                    count++;
                    down = true;
                }
            }

            

            cout << count + 1 << endl;
        }

    }

    return 0;
}
