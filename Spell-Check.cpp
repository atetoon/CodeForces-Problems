#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int len;
        cin >> len;

        string s; cin >> s;
        string n = "Timur";

        if(len != 5) {
            cout << "NO\n";
            continue;
        }

        sort(n.begin(), n.end());
        sort(s.begin(), s.end());

        cout << (s == n ? "YES\n" : "NO\n");
    }
}