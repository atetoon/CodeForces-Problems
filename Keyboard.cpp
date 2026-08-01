#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    char c, i; cin>>c;
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
    while(cin>>i) {
        cout<<s[s.find(i) - (c=='R') + (c=='L')];
    }
    return 0;
}