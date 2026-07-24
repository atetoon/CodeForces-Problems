#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int sum = 0, totalSum = 0, cnt = 0;

    vector<int> v(n);
    for(int i = 0; i<n; i++) {
        cin >> v[i];
        totalSum+=v[i];
    }

    sort(v.begin(), v.end(), greater<int>());

    for(int i = 0; i<n && sum <= totalSum; i++) {
            sum+=v[i];
            totalSum-=v[i];
            cnt++;
    }
    
    cout << cnt;

}