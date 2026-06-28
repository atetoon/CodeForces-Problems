#include<bits/stdc++.h>
using namespace std;

int main() {
    string s; 
    getline(cin, s);

    unordered_set<char> us;

    for(char ch : s) {
        if(isalpha(ch)) us.insert(ch);
    }

    cout << us.size();
}