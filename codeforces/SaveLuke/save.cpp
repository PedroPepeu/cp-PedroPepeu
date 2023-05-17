#include <iostream>

using namespace std;

int main() {
    float d, L, v1, v2;
    cin >> d >> L >> v1 >> v2;

    float time = (1/v1) * ((v1/(v1+v2)) - (d/2));

    cout << time << endl;

    return 0;

}
