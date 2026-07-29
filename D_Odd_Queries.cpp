#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<ll>;

int main() {
    ll t; cin>>t;
    while(t--) {  
        ll n, q; cin>>n>>q;

        vi a(n);
        for(int i = 0; i<n; i++) cin>>a[i];

        vi prefix(n+1);
        prefix[0] = 0;

        for(ll i = 1; i<=n; i++) 
        prefix[i] = prefix[i-1] + a[i-1];

        ll totalSum = prefix[n];
        
        while(q--) {
            ll l, r, k; cin>>l>>r>>k;

            ll rangeSum = prefix[r] - prefix[l-1];

            ll newSum = totalSum - rangeSum + (r-l+1)*k;

            if(newSum%2 == 0) cout<<"NO\n";
            else cout<<"YES\n";
        }
    }  
}