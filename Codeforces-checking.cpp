#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        string s = "codeforces";

        char c; cin >> c;

        bool appear = false;

        for(int i = 0; i<s.size(); i++) {
            if(c == s[i]) appear = true;
        }
        cout << (appear? "YES" : "NO") << '\n';
    }
}