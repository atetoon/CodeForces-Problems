#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int temp = n;
    
    int sum = 0;
    int arr[n];
    while(n--) {
        int exitPassengers;
        int inputPassengers; 
        cin >> exitPassengers >> inputPassengers;
        
        sum = sum - exitPassengers + inputPassengers;
        arr[n] = sum;
    }
    cout << *max_element(arr, arr+temp);
}

int main2() {
    int n;
    cin >> n;
    int mx = 0;
    int sum = 0;
    while(n--) {
        int exitPassengers, inputpassengers;
        
        cin >> exitPassengers >> inputpassengers;

        sum += inputpassengers - exitPassengers;
        
        
        mx = max(mx, sum);
    }
    cout << mx;
}