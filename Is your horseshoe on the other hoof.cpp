#include<bits/stdc++.h> 
using namespace std;

int main() {
    int n = 4;

    unordered_set<int> s;

    while(n--) {
        int num;
        cin >> num;
        s.insert(num);
    }

    cout << 4 - s.size();
}