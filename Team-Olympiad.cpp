#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    vector<int> one, two, three;

    for(int i = 1; i<=t; i++) {
        int x;
        cin >> x;
       
        if (x == 1) one.push_back(i);
        else if (x == 2) two.push_back(i);
        else three.push_back(i);
    }

    int teams = min({one.size(), two.size(), three.size()});
    cout << teams << '\n';
    
    for(int i = 0; i<teams; i++) {
        cout << one[i] << " " << two[i] << " " << three[i] << '\n';
    }
}