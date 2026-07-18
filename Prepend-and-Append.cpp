#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int f=0, l= n-1;

        while(f < l && s[f] != s[l]) {
            if(s[f] != s[l]) n=n-2;

            f++;
            l--;
        }
        cout << n << '\n';
    }
}