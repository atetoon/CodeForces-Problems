#include<bits/stdc++.h>
using namespace std;
using vi = vector<long long>;
using ll = long long;

int main() {
    ll t; cin >> t;

    vi v;
    while(t--) {
        ll x; cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    for(auto it: v) cout << it << " ";
}