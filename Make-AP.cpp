#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t; cin>>t;

    while(t--) {
        int a, b, c; cin>>a>>b>>c;

        int A = b - (c - b);
        int B = a + (c - a)/2;
        int C = b + (b - a);

        if(A>0 && A%a == 0) cout<<"YES\n";
        else if(B>0 && B%b==0 && (c-a)%2==0) cout<<"YES\n";
        else if(C>0 && C%c == 0) cout<<"YES\n";
        else cout<<"NO\n";
    }
}