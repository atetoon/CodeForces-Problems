#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, num; cin >> n;

    while(n--) {
        cin >> num;

        if(num >= 1900) cout << "Division 1" << endl;
        else if(1600 <= num &&  num <= 1899) cout << "Division 2" << endl;
        else if(1400 <= num && num <= 1599) cout << "Division 3" << endl;
        else if(num <= 1399) cout << "Division 4" << endl;
    }
    return 0;
}