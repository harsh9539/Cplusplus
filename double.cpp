#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n],arrr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int j = 0; j < n; j++)
    {
        arrr[j] = arr[j]*2;
    }
    for (int k = 0; k < n; k++)
    {
        cout << arrr[k]<<endl;
    }
    
    return 0;
    
}