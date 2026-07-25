#include<bits/stdc++.h>
using namespace std;

int main() {
    string s; getline(cin, s);

    while(s.find("WUB") != string::npos) 
    s.replace(s.find("WUB"), 3, " ");

    stringstream ss(s);
    string word;
    while(ss >> word) {
        cout << word << " ";
    }
}