#include <iostream>
#include <climits>
using namespace std;
// void  lin_Search(int arr[],int size){

// }
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int size;
        cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        int num;
        cin >> num;
        int k;
        // int b = lin_Search(arr[],size);
        for (int j = 0; j < size; j++)
        {
            if (arr[j] == num)
            {
                cout << j;
                k = num;
                break;
            }
            
        }
        if (k != num)
        {
                cout << -1;
        }
        
        

        t--;
    }
}
