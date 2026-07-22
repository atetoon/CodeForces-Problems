#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, ans = 0;
        cin >> n;
        unordered_set<char> s;
        
        for(int i = 0; i<n; i++) {
            char c;
            cin >> c;

            if(s.find(c) == s.end()) {
                ans+=2;
                s.insert(c);
            } else ans+=1;
        }
        cout << ans << '\n';
    }
}