#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<ll>;

int main() {
    ll n, m, sum = 0; cin>>n>>m;
    vi v(n);
    for(ll i = 0; i<n; i++) cin>>v[i];

    sort(v.begin(), v.end());

    for(ll j = 0; j<m; j++) {
        if (v[j] >= 0) break;
        sum+=v[j];
    }
    cout<<abs(sum);
}