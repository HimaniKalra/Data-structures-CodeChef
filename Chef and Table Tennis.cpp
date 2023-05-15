#include <iostream>
using namespace std;
#define ln "\n"
#define ll long long

void solve(){
    string s; cin >> s;
    cout << ((s[s.length()-1] == '1')?"WIN":"LOSE") << ln;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t; cin >> t;
    while(t--){
        solve();
    }
	return 0;
}
