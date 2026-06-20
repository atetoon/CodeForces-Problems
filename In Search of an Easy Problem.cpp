#include<bits/stdc++.h> 
using namespace std;

int main() {
    int n;
    cin >> n;
    bool hard = false;

    while(n--) {
        int num; 
        cin >> num; 
        if(num == 1) {
            hard = true;
        }
    }
     if(hard) {
            cout << "HARD";
        } else cout << "EASY";
}