#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

    string japanese1 = "desu";
    string japanese2 = "masu";
    string filipino = "po";
    string korean = "mnida";

    int n;
    cin >> n;
    string option;
    
    while(n--) {
        string curWor;
        cin >> curWor;
        
        size_t foundjap1 = curWor.find(japanese1);
        size_t foundjap2 = curWor.find(japanese2);
        size_t foundfili = curWor.find(filipino);
        size_t foundkore = curWor.find(korean);

        if(foundjap1 != string::npos || foundjap2 != string::npos) {
            option = "JAPANESE";
        } else if(foundkore != string::npos) {
            option = "KOREAN";
        } else if(foundfili != string::npos) {
            option = "FILIPINO";
        }

        cout << option << endl;
    }

    return 0;
}
