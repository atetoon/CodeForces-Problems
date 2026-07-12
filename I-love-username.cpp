#include<bits/stdc++.h> 
using namespace std;

int main() {
    int n; cin >> n;
    int num, min, max, cnt = 0;
    cin >> num;
    max = num;
    min = num;

    while(--n) {
        cin >> num;


        if(num < min) {
            min = num;
            cnt++;
        } else if(num > max) {
            max = num;
            cnt++;
        }
    }
    cout << cnt << endl;
}