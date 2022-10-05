#include<bits/stdc++.h>
using namespace std;

void sum(int arr[],int n){
    int sum;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << sum;
}

int main(){
    
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    
    sum(arr,10);
    return 0;
}