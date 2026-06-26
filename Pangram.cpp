#include<bits/stdc++.h> 
using namespace std;

int main() {
    int n; cin >> n; 
    string s; cin >> s;

    unordered_set<char> c;

    for(char ch : s) {
    c.insert(tolower(ch));
    }
    cout << (c.size() >= 26 ? "YES" : "NO");
}