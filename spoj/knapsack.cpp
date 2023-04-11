#include <bits/stdc++.h>

using namespace std;

int s, n;
int mem[3][2000];

int db(int i, int s) {
    if(i > n) return 0;
    if(s < 0) return ; // retornar o caso atual e tirar o caso que deixou menor que zero


}

int main() {

    cin >> s >> n;
    
    memset(mem, -1, sizeof(mem));
    
    mem[0][0] = s;
    int i = 0;
    while(n--) {
        cin >>  mem[i][1] >> mem[i][2];
        i++;
    }

    dp(0, S);

    return 0;

}
