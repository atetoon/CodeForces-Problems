#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, gift, a[100];
    cin >> n;
    for(int i = 1; i<= n; i++) {
        cin >> gift;
        a[gift] = i;
    }
    for(int i = 1; i<=n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}