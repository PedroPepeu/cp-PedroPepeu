#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  
  vector<int> perm;
  vector<int> ans;

  while(n--) {
    int temp;
    cin >> temp;
    perm.push_back(temp);
  }

  for(int i = 0; i < perm.size(); i++) {
    int l, r, x;
    vector<int> aux (perm);
    
    cin >> l >> r >> x;

    sort(aux.begin() + l - 1, aux.begin() + r);
    
    if(aux[x - 1] == perm[x - 1]) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
  return 0;
}
