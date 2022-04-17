#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[],int n){
    int k;
    if (n%2==0){
        k = (n/2) - 1;
    }
    else{
        k = (n/2);
    }
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        s.push(arr[i]);
        if(i==k){
            s.pop();
        }
    }
    for(int i = 0; i < n - 1; i++){
        cout << s.top() << " ";
        s.pop();
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reverseArray(arr,n);

    return 0;

}