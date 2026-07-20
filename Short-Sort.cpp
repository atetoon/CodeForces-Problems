#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    string given = "abc";

    while(t--) {
        int cnt = 0;
        string s; cin >> s;
        
        for(int i = 0; i<3; i++) {
            if(s[i] != given[i]) cnt++;
        }
        
        cout << (cnt != 3? "YES" : "NO") << '\n';
    }
}