#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t; cin>>t;

    while(t--) {
       ll n, x = 0; cin>>n;
       
       for(int k = 2; k<=30; k++) {
            ll dr = pow(2, k)-1;
            if(n%dr) continue;
            x = n>dr;
            break;
       }
       cout<<x<<'\n';
    }
}