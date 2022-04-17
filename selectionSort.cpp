#include <iostream>
#include <vector>
#include <array>
using namespace std;

void selectionSort(int arr[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        int min = arr[i];
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        // swap(arr(min),arr[i]);
        int temp;
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }

    for (int k = 0; k < size; k++)
    {
        cout << arr[k] << endl;
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    selectionSort(arr, n);
    // cout << ans;
}