#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    vector<int> v;

    for(int i = 1; v.size() < 1000; i++) {
        if(i%3 != 0 && i%10 != 3) v.push_back(i);
    }

    while (t--) {
        int x; cin >> x;

        cout << v[x-1] << endl;
    }
    
}