#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<ll>;

int main() {
    ll n, m; cin >> n >> m;

    vi v(m); ll mn = LLONG_MAX;
    for(ll i = 0; i < m; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for(ll i = 0; i<=m-n; i++) {
        mn = min(v[i+n-1] - v[i], mn);
    }

    cout << mn;
}