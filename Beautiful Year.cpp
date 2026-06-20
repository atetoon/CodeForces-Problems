#include<bits/stdc++.h> 
using namespace std;

int main() {
    int n;
    cin >> n;
    while(true) {
    int o = n%10;
    int te = n/10%10;
    int h = n/100%10;
    int th = n/1000%10;
    if(o != te && o != h && te != th && h != th) {
        cout << n;
        return 0;
    } else n++;
    }
}