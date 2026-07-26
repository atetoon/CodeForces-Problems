#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n, m; cin >> n >> m;

    cout << (min(n, m)%2 == 0 ? "Malvika" : "Akshat");
}