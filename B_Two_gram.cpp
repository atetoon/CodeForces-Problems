#include<bits/stdc++.h> 
using namespace std;

int main() {
    int n, mx=0;
    string s, ss, twograms;
    map<string, int> smp;

    cin>>n>>s;

    for(int i = 0;i<n-1;i++) {
        ss = s[i], ss+=s[i+1], smp[ss]++;
        if(smp[ss]>mx) mx = smp[ss], twograms=ss;
    }
    cout<<twograms;
}   