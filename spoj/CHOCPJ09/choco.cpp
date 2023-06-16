#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int rounds = n/m;

    if((rounds % 2 == 0) && (n % m == 0)) cout << "Carlos" << endl;
    else cout << "Paula" << endl;

    return 0;
}
