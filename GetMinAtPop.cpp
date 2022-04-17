#include <bits/stdc++.h>
using namespace std;

stack<int> _push(int arr[], int n);
void _getMinAtPop(stack<int> s);





stack<int> _push(int arr[], int n)
{
    stack<int> s;
    int min = arr[0];
    s.push(arr[0]);
    for (int i = 1; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
        s.push(min);
    }
    return s;
    // your code here
}

// Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int> s)
{
    while (s.empty() == false)
    {
        cout << s.top() << " ";
        s.pop();
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];}
        stack<int> mys = _push(arr, n);
        _getMinAtPop(mys);
        cout << endl;
    }
    return 0;
}