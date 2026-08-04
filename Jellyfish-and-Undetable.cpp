#include<bits/stdc++.h> 
using namespace std;

int main() {
    int t; cin>>t;

    while(t--) {
    
        long long a, b, n; cin >> a >> b >> n;
        long long ans = b;

        long long arr[n];
        for(int i = 0; i<n;i++) {
            cin>>arr[i];
        }
        for(int i = 0;i<n;i++) {
            ans+= min(arr[i], a - 1);
        }
        cout << ans << '\n';
    }
}   