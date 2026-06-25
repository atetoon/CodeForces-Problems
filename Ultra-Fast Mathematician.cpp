#include<bits/stdc++.h> 
using namespace std;

int main() {
    string n, m;
    cin >> n >> m;

    for(int i = 0; i < n.size(); i++) {
        cout << (n[i] == m[i] ? 0 : 1);
    }
}