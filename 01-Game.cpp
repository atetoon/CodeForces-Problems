#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t; cin>>t;

    while(t--) {
        int cnt0 =0, cnt1= 0;
        string s; cin>>s;

        for(int i = 0; i<s.size(); i++) {
            if(s[i] == '0') cnt0++;
            else cnt1++;
        }
        int mn = min(cnt0, cnt1);

        if(mn%2) cout <<"DA\n";
        else cout <<"NET\n";
    }
}