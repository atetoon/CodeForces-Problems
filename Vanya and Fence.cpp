#include<bits/stdc++.h> 
using namespace std;

void solution1(int n, int h) {
    // int n, h; cin >> n >> h;
    int cnt = 0;
    int arr[n];
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i< n; i++) {
        if(arr[i] > h) {
            cnt += 2;
        } else if(arr[i] <= h) {
            cnt++;
        }
    }
    cout << cnt << endl;
}

void solution2(int n, int h) {
    // int n, h; cin >> n >> h;
    int cnt = 0;
    
    for(int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        if(x > h) {
            cnt += 2;
        } else if(x <= h) {
            cnt++;
        }
    }
    cout << cnt << endl;
}

int main() {
    int n, h;
    cin >> n >> h;
    solution1(n, h);
}