#include<bits/stdc++.h>
using namespace std;
using vi = vector<int>;

int main() {
    int t; cin>>t;

    while (t--) {
        int n, k; cin>>n>>k;
        vi v(n);

        for(int i = 0; i<n; i++) cin >> v[i];
        sort(v.begin(), v.end());

        int mx = 1, cnt = 1;

        for(int i = 0; i<n-1; i++) {
            if(v[i+1]-v[i] <= k) cnt++;
            else cnt = 1;
            mx = max(cnt, mx);
        }
        cout << n-mx << '\n';
    }
}