#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int teams;

    if(a > b) {
        teams = a / 2;
    } else {
        teams = (b+1) / 2;
    }

    cout << teams << endl;
}
