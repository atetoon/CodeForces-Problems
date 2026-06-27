#include<bits/stdc++.h> 
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_set<int> s;

    int p, q;
    cin >> p;
    while(p--) {
        int x;
        cin >> x;
        s.insert(x);
    }
    cin >> q;
    while(q--) {
        int x;
        cin >> x;
        s.insert(x);
    }

    if(s.size() == n) {
        cout << "I become the guy.";
    } else {
        cout << "Oh, my keyboard!";
    }
}
