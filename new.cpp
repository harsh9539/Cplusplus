#include <bits/stdc++.h>
using namespace std;
/*
void swaps(int *first, int *second)
{
    int temp = *first;
    *first = *second;
    *second = temp;
}
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swaps(&arr[j], &arr[j+1]);
            }
        }
    }
}
int main()
{
    multiset<int> ms;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    bubbleSort(arr, n);
    for (int k = 0; k < n; k++)
    {
        cout << arr[k]<< " ";
    }
}
*/
// int BinarySearch(int n)
// {
//     int s = 0;
//     int e = n;
//     int mid = s + (e - s) / 2;
//     int ans = -1;
//     while (s <= e)
//     {
//         int square = mid * mid;
//         if (square == mid)
//         {
//             return mid;
//         }
//         if (square > n)
//         {
//             e = mid - 1;
//         }
//         if (square < n)
//         {
//             ans = mid;
//             s = mid + 1;
//         }
//         mid = s + (e - s) / 2;
//     }
//     return ans;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int ans;
//     ans = BinarySearch(n);
//     cout << ans;
// }

int main()
{
    int n;
    cin >> n;
    stack<int> s;
    while (n >= 1)
    {
        n = n%2;
        s.push(n);
    }
    for(int x:s){
        cout << x;
    }
}
