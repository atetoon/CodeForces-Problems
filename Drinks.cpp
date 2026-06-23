#include<bits/stdc++.h>
using namespace std;

int main() {
    float n;
    cin >> n;
    float temp = n;
    float sum = 0;

    while(n--) {
        int num;
        cin >> num;

        sum += num;
    }
    cout << (float) sum/(temp);
}