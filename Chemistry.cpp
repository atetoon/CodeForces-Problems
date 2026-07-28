#include<bits/stdc++.h>
using namespace std;
using vi = vector<int>;

int main() {
    int t; cin>>t;

    while (t--) {
        int n, k; cin>>n>>k;
        string s; cin>>s;
        map<char, int> m;
        
        for(int i = 0; i<n; i++) m[s[i]]++;

        int count = 0; 
        for(int i = 'a'; i<='z'; i++) 
            if(m[i]%2) count++;

        if(count>k+1) cout<<"NO\n";
        else cout<<"YES\n";
    }
}