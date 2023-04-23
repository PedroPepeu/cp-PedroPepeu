#include <iostream>

using namespace std;

int main() {
    int H, P, F, d;
    cin >> H >> P >> F >> d;

    if(d == -1) {
        if(H < F && F < P) cout << "S" << endl;
        else if(F < H && H < P) cout << "N" << endl;
        else if(F < P && P < H) cout << "S" << endl;
        else if(H < P && P < F) cout << "N" << endl;
    } else {
        if(H < F && F < P) cout << "N" << endl;
        else if(F < H && H < P) cout << "S" << endl;
        else if(F < P && P < H) cout << "N" << endl;
        else if(H < P && P < F) cout << "S" << endl;
    }

    return 0;
}
