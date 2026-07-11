#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        string s; cin >> s;

        for(char &ch: s) {
            ch = toupper(ch);
        }

        cout << (s == "YES"? "YES" : "NO");
        cout << endl;
    }
}