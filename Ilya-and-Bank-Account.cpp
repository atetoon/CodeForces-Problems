#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;

    if(n>=0) {
        cout<<n;
        return 0;
    }
    
    int ld = n/10;
    int sld = n/100;
    int temp = n%10;

    sld = temp + (sld*10);

    int mx = max(ld, sld);

    cout << mx;
}