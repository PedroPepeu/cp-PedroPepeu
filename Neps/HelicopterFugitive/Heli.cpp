#include <iostream>

using namespace std;

int main() {
    int H, P, F, d;
    cin >> H >> P >> F >> d;

    if(d == -1) { // horario
        if(F < P && F < H) { // if less then both he will reach first in the higher
            if(H > P) { // runs
                cout << "S" << endl;
            } else cout << "N" << endl;
        } else {
            if(H > P) { // foge
                cout << "S" << endl;
            } else if(P > H) cout << "N" << endl;
        }
    } else { // anti-horario
        if(F > P && F > H) {
            if(H < P) {
                cout << "N" << endl;
            } else cout << "S" << endl;
        } else {
            if(H > P) {
                cout << "N" << endl;
            } else cout << "S" << endl;
        }
    }

    return 0;
}
