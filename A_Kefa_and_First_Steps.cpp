#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<ll>;

int main() {
    ll n; cin >> n;
    vi v; ll cnt = 1, mx = 1;

    while(n--) {
        ll x; cin >> x;
        v.push_back(x);
    }

    for(ll i = 0; i<v.size()-1; i++) {
        if(v[i] <= v[i+1]) cnt++;
        else cnt = 1;
        mx = max(cnt, mx);
    }

    cout << mx;
}