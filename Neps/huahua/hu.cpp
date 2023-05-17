#include <iostream>
#include <string>

using namespace std;

int main() {
    int t = 0;
    string ris;
    getline(cin, ris);
    for(int i = 0, j = ris.size() - 1; i < j; i++, j--) {
        if(ris[i] != 'a' && ris[i] != 'e' && ris[i] != 'i' && ris[i] != 'o' && ris[i] != 'u') {
            i++;
        }
        if(ris[j] != 'a' && ris[j] != 'e' && ris[j] != 'i' && ris[j] != 'o' && ris[j] != 'u') {
            j--;
        }

        if(ris[i] != ris[j]) {
            t = 1;
            break;
        }
    }
    if(t == 1) cout << "N" << endl;
    else cout << "S" << endl;

    return 0;
}
