#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int _;
        cin >> _;
        string s;
        cin >> s;
        int cnt = 0;
        bool found = false;

        for(int i = 0; i<s.size(); i++) {
                if( i+2 < s.size() && s[i] == '.' && s[i+1] == '.' && s[i+2] == '.') {
                    cout << 2 << '\n';
                    found = true;
                    break;
                }
                else if(s[i] == '.') cnt++;
        }
        if(!found) cout << cnt << '\n';
    }
}