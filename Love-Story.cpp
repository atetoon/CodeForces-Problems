#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    string s1 = "codeforces";

    while(t--) {
        string s2; cin >> s2;
        int cnt = 0;

        for(int i = 0; i<s1.size(); i++) {
            cnt+= (s1[i] != s2[i]);
        }
        cout << cnt << '\n';
    }
}