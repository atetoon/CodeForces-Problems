#include<bits/stdc++.h> 
using namespace std;

int main() {
    string s1;
    cin >> s1;
    unordered_set<char> s;
    
    for(int i = 0; i < s1.length(); i++) {
        s.insert(s1[i]);
    }
    if(s.size()%2==0) {
        cout << "CHAT WITH HER!";
    } else cout << "IGNORE HIM!";
}